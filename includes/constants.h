/*
 * constants.h
 * 
 * Created on: Sep 26, 2020
 *          Author: Savian Elam
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#include <string>

//default return types
const int 			EMPTY			 				=  0;
const int 			SUCCESS			 				=  0;
const int 			FAIL							=  SUCCESS - 1;
const int 			COULD_NOT_OPEN_FILE				=  SUCCESS - 2;
const int 			NO_DATA_TO_WORK_ON				=  SUCCESS - 3;
const int			UNIMPLEMENTED					=  SUCCESS - 4;
const int			UNINITIALIZED					=  SUCCESS - 5;

enum SORT_ORDER { PROCESS_NUMBER, CPU_TIME, START_TIME };
struct process{	int process_number=UNINITIALIZED;
				int cpu_time=UNINITIALIZED;
				int start_time=UNINITIALIZED;};

const std::string SOURCE_FILE 	= "source_file.txt";
const std::string RESULTS_FILE 	= "results_file.txt";

#endif