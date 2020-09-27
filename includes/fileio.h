/*
 *fileio.h
 * 
 *  Created on: Sep 26, 2020
 *           Author: Savian Elam
 */

#ifndef FILEIO_H_
#define FILEIO_H_

#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
