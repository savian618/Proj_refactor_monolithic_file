/*
 * utils.h
 *
 *   Created on: Sep 23, 2020
 *       Author: Savian Elam
*/


#ifndef UTILS_H_
#define UTILS_H_

#include "../includes/constants.h"

#include <iostream>
#include <string>
#include <vector>


void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses);

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses);

int handleMissingData(std::vector<process> &myProcesses);

#endif
