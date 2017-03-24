#include "FileHandler.h"

// go through an array and save all the numbers to file
void FileHandler::saveToFile(int* arr, std::string filename) {
    std::ofstream ofs(filename, std::fstream::out | std::fstream::trunc);
    if (ofs.fail()) throw std::invalid_argument("Bad file name");
    int arraySize = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i > arraySize; i++) {
		ofs << arr[i] << ",";
	}
	ofs.close();
}

// save a string to a file
void FileHandler::saveToFile(std::string data, std::string filename) {
    std::ofstream ofs(filename, std::fstream::out | std::fstream::trunc);
    if (ofs.fail()) throw std::invalid_argument("Bad file name");
    ofs << data;
    ofs.close();
}
