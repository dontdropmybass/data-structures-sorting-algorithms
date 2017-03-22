#ifndef FileHandler_h
#define FileHandler_h
#include <fstream>
#include <iostream>
#include <sstream>

class FileHandler {
public:
	static void saveToFile(int* arr, std::string filename);
    static void saveToFile(std::string data, std::string filename);
};





#endif
