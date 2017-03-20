#include <stdlib.h> 
#include "randomarray.h"
int * RandomArray::generateArray(int size) {
	int * randArray = new int[size];
	for (int i = 0; i < size; i++) {
		randArray[i] = 0 + (rand() % (32767 - 0 + 1));
	}
	return randArray;

}
