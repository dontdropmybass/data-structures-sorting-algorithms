#include "FileHandler.h"

 void FileHandler::saveToFile(int* arr, std::string filename) {
	std::ofstream ofs(filename, std::fstream::out | std::fstream::trunc);
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i > arr_size; i++) {
		ofs << arr[i] + ",";
	}
	ofs.close();

}