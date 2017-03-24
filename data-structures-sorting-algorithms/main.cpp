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
#include "filehandler.h"

// found on stackoverflow
inline bool isInteger(const std::string & s)
{
    if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false ;
    
    char * p ;
    strtol(s.c_str(), &p, 10) ;
    
    return (*p == 0) ;
}

int main(int argc, const char * argv[]) {
    int arraySize = -1;
    std::string csvOutput = ",Merge Sort,Bubble Sort,Selection Sort,Insertion Sort,Shell Sort,Quick Sort\n";
    if (argc > 1) {
        arraySize = std::atoi(argv[1]);
    }
    else {
        std::string aSize;
        std::cout << "array size: " << std::endl;
        std::cin >> aSize;
        if (isInteger(aSize)) {
            arraySize = atoi(aSize.c_str());
        }
        else {
            arraySize = -1;
        }
    }
    if (!(arraySize>0)) {
        int sizes[] = {25000,50000,75000,100000};
        for (int i = 0; i < 4; i++) {
            arraySize = sizes[i];
            int* originalArray = RandomArray::generateArray(arraySize);
            int* array;
            std::cout << "Running sorts on array of size: " << arraySize << std::endl;
            //call sort methods
            csvOutput += "Size ";
            csvOutput += std::to_string(arraySize);
            csvOutput += ",";
            
            array = new int[arraySize];
            for (int i = 0; i < arraySize; i++) {
                array[i] = originalArray[i];
            }
            
            clock_t startTime = clock();
            //merge
            Sorts::mergeSort(array, 0, arraySize);
            clock_t endTime = clock();
            clock_t clockTicksTaken = endTime - startTime;
            double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
            std::cout << "Merge Sort took: " << timeInSeconds << std::endl;
            csvOutput += std::to_string(timeInSeconds);
            csvOutput += ",";
            std::cout << array;
            array = new int[arraySize];
            for (int i = 0; i < arraySize; i++) {
                array[i] = originalArray[i];
            }
            
            startTime = clock();
            //bubble
            Sorts::bubbleSort(array, arraySize);
            endTime = clock();
            clockTicksTaken = endTime - startTime;
            timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
            std::cout << "Bubble Sort took: " << timeInSeconds << std::endl;
            csvOutput += std::to_string(timeInSeconds);
            csvOutput += ",";
            
            array = new int[arraySize];
            for (int i = 0; i < arraySize; i++) {
                array[i] = originalArray[i];
            }
            
            startTime = clock();
            //selection
            Sorts::selectionSort(array, arraySize);
            endTime = clock();
            clockTicksTaken = endTime - startTime;
            timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
            std::cout << "Selection Sort took: " << timeInSeconds << std::endl;
            csvOutput += std::to_string(timeInSeconds);
            csvOutput += ",";
            
            array = new int[arraySize];
            for (int i = 0; i < arraySize; i++) {
                array[i] = originalArray[i];
            }
            
            startTime = clock();
            //insertion
            Sorts::insertionSort(array, arraySize - 1);
            endTime = clock();
            clockTicksTaken = endTime - startTime;
            timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
            std::cout << "Insertion Sort took: " << timeInSeconds << std::endl;
            csvOutput += std::to_string(timeInSeconds);
            csvOutput += ",";
            
            array = new int[arraySize];
            for (int i = 0; i < arraySize; i++) {
                array[i] = originalArray[i];
            }
            
            startTime = clock();
            //shell
            Sorts::shellSort(array, arraySize - 1);
            endTime = clock();
            clockTicksTaken = endTime - startTime;
            timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
            std::cout << "Shell Sort took: " << timeInSeconds << std::endl;
            csvOutput += std::to_string(timeInSeconds);
            csvOutput += ",";
            
            array = new int[arraySize];
            for (int i = 0; i < arraySize; i++) {
                array[i] = originalArray[i];
            }
            
            startTime = clock();
            //quick sort
            Sorts::quickSort(array, 0, arraySize - 1);
            endTime = clock();
            clockTicksTaken = endTime - startTime;
            timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
            std::cout << "Quick Sort took: " << timeInSeconds << std::endl << std::endl << std::endl;
            csvOutput += std::to_string(timeInSeconds);
            csvOutput += ",\n";
            
            delete [] originalArray;
            delete [] array;
        }
        FileHandler::saveToFile(csvOutput,"/Users/alex/repos/data-structures-sorting-algorithms/sorting_times.csv");
    }
    else {
        int* originalArray = RandomArray::generateArray(arraySize);
        int* array;
        //call sort methods
        
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = originalArray[i];
        }
        
        clock_t startTime = clock();
        //merge
        Sorts::mergeSort(array, 0, arraySize);
        clock_t endTime = clock();
        clock_t clockTicksTaken = endTime - startTime;
        double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
        std::cout << "Merge Sort took: " << timeInSeconds << std::endl;
        csvOutput += std::to_string(timeInSeconds);
        csvOutput += ",";
        
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = originalArray[i];
        }
        
        startTime = clock();
        //bubble
        Sorts::bubbleSort(array, arraySize);
        endTime = clock();
        clockTicksTaken = endTime - startTime;
        timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
        std::cout << "Bubble Sort took: " << timeInSeconds << std::endl;
        csvOutput += std::to_string(timeInSeconds);
        csvOutput += ",";
        
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = originalArray[i];
        }
        
        startTime = clock();
        //selection
        Sorts::selectionSort(array, arraySize);
        endTime = clock();
        clockTicksTaken = endTime - startTime;
        timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
        std::cout << "Selection Sort took: " << timeInSeconds << std::endl;
        csvOutput += std::to_string(timeInSeconds);
        csvOutput += ",";
        
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = originalArray[i];
        }
        
        startTime = clock();
        //insertion
        Sorts::insertionSort(array, arraySize - 1);
        endTime = clock();
        clockTicksTaken = endTime - startTime;
        timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
        std::cout << "Insertion Sort took: " << timeInSeconds << std::endl;
        csvOutput += std::to_string(timeInSeconds);
        csvOutput += ",";
        
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = originalArray[i];
        }
        
        startTime = clock();
        //shell
        Sorts::shellSort(array, arraySize - 1);
        endTime = clock();
        clockTicksTaken = endTime - startTime;
        timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
        std::cout << "Shell Sort took: " << timeInSeconds << std::endl;
        csvOutput += std::to_string(timeInSeconds);
        csvOutput += ",";
        
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = originalArray[i];
        }
        
        startTime = clock();
        //quick sort
        Sorts::quickSort(array, 0, arraySize - 1);
        endTime = clock();
        clockTicksTaken = endTime - startTime;
        timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;
        std::cout << "Quick Sort took: " << timeInSeconds << std::endl << std::endl << std::endl;
        csvOutput += std::to_string(timeInSeconds);
        csvOutput += ",";
        
        delete [] originalArray;
        delete [] array;
    }
    return 0;
}
