//
//  main.cpp
//  data-structures-sorting-algorithms
//
//  Created by Alexander Cochrane on 2017-03-19.
//  Copyright © 2017 Alexander Cochrane. All rights reserved.
//

#include <stdlib.h>
#include <iostream>
#include "randomArray.h"
#include "sorts.h"

int main(int argc, const char * argv[]) {
    int ArraySize;
    try {
        ArraySize = std::stoi(argv[1]);
    }
    catch (...) {
        std::cout << "array size: " << std::endl;
        std::cin >> ArraySize;
    }
    int * Array = RandomArray::generateArray(ArraySize);
    //call sort methods
    int arr_size = sizeof(Array) / sizeof(Array[0]);
    //merge
    Sorts::mergeSort(Array, 0, arr_size - 1);
    //bubble
    Sorts::bubbleSort(Array);
    //selection
    Sorts::selectionSort(Array);
    //insertion
    Sorts::insertionSort(Array, arr_size - 1);
    //shell
    Sorts::shellSort(Array, arr_size - 1);
    //quick sort
    Sorts::quickSort(Array, 0, arr_size - 1);
    //merge sort
    Sorts::mergeSort(Array, 0, arr_size - 1);
    return 0;
}
