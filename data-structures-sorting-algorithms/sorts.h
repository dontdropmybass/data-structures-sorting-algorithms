//
//  sorts.h
//  data-structures-sorting-algorithms
//
//  Created by Alexander Cochrane on 2017-03-20.
//  Copyright © 2017 Alexander Cochrane. All rights reserved.
//

#ifndef sorts_h
#define sorts_h
class Sorts {
public:
    static void bubbleSort(int* arr, int size);
    static void selectionSort(int* arr, int size);
    static void insertionSort(int* arr, int size);
    static void shellSort(int* arr, int size);
    static void quickSort(int* arr, int left, int right);
    static void mergeSort(int* arr, int l, int r);
    static int* merge(int* arr1, int size1, int* arr2, int size2);
    static int* mSort(int* arr, int size);
};

#endif /* sorts_h */
