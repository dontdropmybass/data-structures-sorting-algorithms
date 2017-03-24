#include "sorts.h"
#include "FileHandler.h"

void Sorts::bubbleSort(int* arr, int size) {
    bool swapped = true;
    int j = 0;
    int tmp;
    while (swapped) {
		//conditional set to false
        swapped = false;
        j++;
        for (int i = 0; i < size - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
				//conditional set true will only be hit after sorting numbers
                swapped = true;
            }
        }
    }
	if (size < 1001) {
		FileHandler::saveToFile(arr, "1kBubbleSort.csv");
	}

}

void Sorts::selectionSort(int* arr, int size) {
    int outer, inner, min;

    for (outer = 0; outer < size - 1; outer++) {
		//go through array at first index
        min = outer;
        for (inner = outer + 1; inner < size; inner++) {
			//go through rest of array after the index and see if value is less then outer index
            if (arr[inner] < arr[min]) {
                min = inner;
            }
        }
		//overwriting the index with the lowest value found
        int temp = arr[outer];
        arr[outer] = arr[min];
        arr[min] = temp;
    }

	if (size < 1001) {
		FileHandler::saveToFile(arr, "1kSelectionSort.csv");
	}
}

void Sorts::insertionSort(int* arr, int length)
{
	int i, j, tmp;
	for (i = 1; i < length; i++)
	{
		//move forwards through the array
		j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			//if the index of j - 1 is less then J swap them
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			//continue to move backwards through the array comparing values
			j--;
		} //end of while loop
	} //end of for loop

	if (length < 1001) {
		FileHandler::saveToFile(arr, "1kInsertionSort.csv");
	}
}

void Sorts::shellSort(int* arr, int length){
int i, j, increment, temp;
//get a gap "increment" initialized as half the size of the array,
for (increment = length / 2; increment > 0; increment /= 2)
{
	//set up i to start at the increment value
	//i's value increases with each iteration
	for (i = increment; i<length; i++)
	{
		temp = arr[i];
		//check the value at the index of J
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
	}//end inner for
}//end outer for

if (length < 1001) {
	FileHandler::saveToFile(arr, "1kShellSort.csv");
}

}

//takes an array, and the first  and last indicies of that array
void Sorts::quickSort(int* arr, int left, int right) {
    //set indexing variables equal to first and last indecies
    int i = left;
    int j = right;
	//temp variable to hold value when swapping index values
	int tmp;
	//pivot is set to the middle variable
	int pivot = arr[(left + right) / 2];

	//walk through the array until value is smaller then pivot
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		//walk through array until value is larger then pivot
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

	//recall function if left is smaller then J with J as the new Right Value
	if (left < j) {
		quickSort(arr, left, j);
	}
	//recall function if Right is smaller then I with I as the new Left Value
	if (i < right) {
		quickSort(arr, i, right);
	}

	if (right < 1001) {
		FileHandler::saveToFile(arr, "1kQuickSort.csv");
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void Sorts::mergeSort(int* arr, int l, int r)
{
    arr = mSort(arr,r);

	if (r < 1001) {
		FileHandler::saveToFile(arr, "1kMergeSort.csv");
	}
}

int* Sorts::mSort(int* arr, int size) {
    if (size > 1) {
        //get the middle index
        int m = (int) size / 2;
        
        // make two seperate arrays
        int size1 = m;
        int* arr1 = new int[size1];
        
        for (int i = 0; i < size1; i++) {
            arr1[i] = arr[i];
        }
        
        int size2 = size - m;
        int* arr2 = new int[size2];
        
        for (int i = 0; i < size2; i++) {
            arr2[i] = arr[i + m];
        }
        
        // finally merge the  halves into one array
        mSort(arr1, size1);
        mSort(arr2, size2);
        
        //merge the halves
        arr = merge(arr1, size1, arr2, size2);
        delete [] arr1;
        delete [] arr2;
    }
    return arr;
}

int* Sorts::merge(int* arr1, int size1, int* arr2, int size2) {
    int i,j;
    int* merged = new int[size1+size2];
    i = 0;
    j = 0;
    
    while (i < size1 || j < size2) {
        if (i >= size1) {
            merged[i+j] = arr2[j];
            j++;
        }
        else if (j >= size2) {
            merged[i+j] = arr1[i];
            i++;
        }
        else if (arr1[i]<arr2[j]) {
            merged[i+j] = arr1[i];
            i++;
        }
        else {
            merged[i+j] = arr2[j];
            j++;
        }
    }
    
    return merged;
}

