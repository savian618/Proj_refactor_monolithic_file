/*
 *fileio.cpp
 *
 * Created on: Sep. 24, 2020
 * 		Author:Savian Elam
*/
#include <fstream>

#include "../includes/fileio.h"

#include "../includes/constants.h"

#include "../includes/utils.h"

using namespace std;
//file IO bits

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}