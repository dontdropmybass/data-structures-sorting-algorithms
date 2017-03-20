#include "sorts.h"

void Sorts::bubbleSort(int* arr) {
	int outer, inner;
	for (outer = (sizeof(arr)/sizeof(int)) - 1; outer > 0; outer--) {
		for (inner = 0; inner < outer; inner++) {
			if (arr[inner] > arr[inner + 1]) {
				int temp = arr[inner];
				arr[inner] = arr[inner + 1];
				arr[inner + 1] = temp;
			}
		}
	}

}

void Sorts::selectionSort(int* arr) {
	int outer, inner, min;
	for (outer = 0; outer < (sizeof(arr)/sizeof(int)) - 1; outer++) {
		min = outer;
		
		for (inner = outer + 1; inner < (sizeof(arr)/sizeof(int)); inner++)
		{
			if (arr[inner] < arr[min]) { min = inner; }
		}
		int temp = arr[outer];
		arr[outer] = arr[min];
		arr[min] = temp;

	}
}

void Sorts::insertionSort(int arr[], int length)
{
	int i, j, tmp;
	for (i = 1; i < length; i++)
	{
		j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		} //end of while loop
	} //end of for loop
}

void Sorts::shellSort(int arr[], int length){
int i, j, increment, temp;
for (increment = length / 2; increment > 0; increment /= 2)
{
	for (i = increment; i<length; i++)
	{
		temp = arr[i];
		for (j = i; j >= increment; j -= increment)
		{
			if (temp < arr[j - increment])
			{
				arr[j] = arr[j - increment];
			}
			else
			{
				break;
			}
		}
		arr[j] = temp;
	}
}
}

//takes an array, and the first  and last indicies of that array
void Sorts::quickSort(int arr[], int left, int right) {
	//set indexing variables equal to first and last indecies
	int i = left, j = right;
	//temp variable to hold value when swapping index values
	int tmp;
	//pivot is set to the middle variable
	int pivot = arr[(left + right) / 2];

	//walk through the array
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		//swap the values of I and J if I is less then or equal to J
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	//recursively call function until I is at the last index and J is at the first
	if (left < j) {
		quickSort(arr, left, j);
	}
	if (i < right) {
		quickSort(arr, i, right);
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void Sorts::mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		//get the middle index
		int m = l + (r - l) / 2;

		// make two seperate arrays 
		//finally merge the  halves into one array
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		
		//merge the halves
		merge(arr, l, m, r);
	}
}


void Sorts::merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	 int n1 = m - l + 1;
	 int n2 = r - m;

	//create temp arrays 
	int L[n1], R[n2];

	// Copy data to temp arrays L[] and R[] 
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	//Merge the temp arrays back into arr[l..r]
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], if there are any 
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if ther are any 
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}


