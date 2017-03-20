//#include <stdlib.h>
//#include "RandomArray.cpp"
//#include "Sorts.cpp"
//using namespace std;
//
//int main() {
//	bool cont = true;
//
//	while (cont) {
//		int ArraySize;
//		cout << "array size: " << endl;
//		cin >> ArraySize;
//		if (ArraySize == 1000) {
//			int * Array1k = generateArray(ArraySize);
//			//call sort methods
//			int arr_size = sizeof(Array1k) / sizeof(Array1k[0]);
//			//merge
//			mergeSort(Array1k, 0, arr_size - 1);
//			//bubble
//			bubbleSort(Array1k);
//			//selection
//			selectionSort(Array1k);
//			//insertion
//			insertionSort(Array1k, arr_size -1);
//			//shell
//			shellSort(Array1k, arr_size -1);
//			//quick sort
//			quickSort(Array1k, 0, arr_size -1);
//			//merge sort
//			mergeSort(Array1k, 0, arr_size - 1);
//		}
//		else if (ArraySize == 25000) {
//			int * Array25k = generateArray(ArraySize);
//			//call sort methods
//			int arr_size = sizeof(Array25k) / sizeof(Array25k[0]);
//			//merge
//			mergeSort(Array25k, 0, arr_size - 1);
//			//bubble
//			bubbleSort(Array25k);
//			//selection
//			selectionSort(Array25k);
//			//insertion
//			insertionSort(Array25k, arr_size - 1);
//			//shell
//			shellSort(Array25k, arr_size - 1);
//			//quick sort
//			quickSort(Array25k, 0, arr_size - 1);
//			//merge sort
//			mergeSort(Array25k, 0, arr_size - 1);
//		}
//		
//		else if (ArraySize == 50000) {
//			int * Array50k = generateArray(ArraySize);
//			//call sort methods
//			int arr_size = sizeof(Array50k) / sizeof(Array50k[0]);
//			//merge
//			mergeSort(Array50k, 0, arr_size - 1);
//			//bubble
//			bubbleSort(Array50k);
//			//selection
//			selectionSort(Array50k);
//			//insertion
//			insertionSort(Array50k, arr_size - 1);
//			//shell
//			shellSort(Array50k, arr_size - 1);
//			//quick sort
//			quickSort(Array50k, 0, arr_size - 1);
//			//merge sort
//			mergeSort(Array50k, 0, arr_size - 1);
//		}
//
//		else if (ArraySize == 75000) {
//			int * Array75k = generateArray(ArraySize);
//			//call sort methods
//			int arr_size = sizeof(Array75k) / sizeof(Array75k[0]);
//			//merge
//			mergeSort(Array75k, 0, arr_size - 1);
//			//bubble
//			bubbleSort(Array75k);
//			//selection
//			selectionSort(Array75k);
//			//insertion
//			insertionSort(Array75k, arr_size - 1);
//			//shell
//			shellSort(Array75k, arr_size - 1);
//			//quick sort
//			quickSort(Array75k, 0, arr_size - 1);
//			//merge sort
//			mergeSort(Array75k, 0, arr_size - 1);
//		}
//
//		else if (ArraySize == 100000) {
//			int * Array100k = generateArray(ArraySize);
//			//call sort methods
//			int arr_size = sizeof(Array100k) / sizeof(Array100k[0]);
//			//merge
//			mergeSort(Array100k, 0, arr_size - 1);
//			//bubble
//			bubbleSort(Array100k);
//			//selection
//			selectionSort(Array100k);
//			//insertion
//			insertionSort(Array100k, arr_size - 1);
//			//shell
//			shellSort(Array100k, arr_size - 1);
//			//quick sort
//			quickSort(Array100k, 0, arr_size - 1);
//			//merge sort
//			mergeSort(Array100k, 0, arr_size - 1);
//		}
//	}
//	return 0;
//}
