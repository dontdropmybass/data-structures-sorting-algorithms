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
#include <ctime>

int main(int argc, const char * argv[]) {
    int ArraySize;
    try {
        ArraySize = std::atoi(argv[1]);
    }
    catch (...) {
        std::cout << "array size: " << std::endl;
        std::cin >> ArraySize;
    }
    int * Array = RandomArray::generateArray(ArraySize);
    //call sort methods
    int arr_size = sizeof(Array) / sizeof(Array[0]);

	clock_t startTime = clock();
    //merge
    Sorts::mergeSort(Array, 0, arr_size - 1);
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	std::cout << "Merge Sort took: " << timeInSeconds;
    
	clock_t startTime = clock();
	//bubble
    Sorts::bubbleSort(Array);
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	std::cout << "Bubble Sort took: " << timeInSeconds;

	clock_t startTime = clock();
    //selection
    Sorts::selectionSort(Array);
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	std::cout << "Selection Sort took: " << timeInSeconds;

	clock_t startTime = clock();
    //insertion
    Sorts::insertionSort(Array, arr_size - 1);
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	std::cout << "Insertion Sort took: " << timeInSeconds;

	clock_t startTime = clock();
    //shell
    Sorts::shellSort(Array, arr_size - 1);
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	std::cout << "Shell Sort took: " << timeInSeconds;
	
	clock_t startTime = clock();
    //quick sort
    Sorts::quickSort(Array, 0, arr_size - 1);
	clock_t endTime = clock();
	clock_t clockTicksTaken = endTime - startTime;
	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
	std::cout << "Quick Sort took: " << timeInSeconds;
   

    return 0;
}
