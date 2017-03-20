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
    static void bubbleSort(int* arr);
    static void selectionSort(int* arr);
    static void insertionSort(int arr[], int length);
    static void shellSort(int arr[], int length);
    static void quickSort(int arr[], int left, int right);
    static void mergeSort(int arr[], int l, int r);
    static void merge(int arr[], int l, int m, int r);
};

#endif /* sorts_h */
