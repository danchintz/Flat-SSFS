#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include "ssfs.hpp"

using namespace std;

void CREATE(string filename);

void IMPORT(string ssfsFile, string unixFilename);

void CAT(string fileName);

void DELETE(string fileName);

void WRITE(string fileName, char c, uint start, uint num);

void READ(string fileName, uint start, uint num);

void SHUTDOWN();

void* SCH_run(void* vec);

#endif