#include ../main/global.h"

#ifndef FILE_FUNCTIONS
#define FILE_FUNCTIONS

int hashFunction(char *lineName);
int seekLine(char *lineName, struct file *dtb);
int buffer(int *lineName, char *buffer[], struct file *dtb);
int erase(int *lineName, struct file *dtb);
int writeInFile(char *line, char *buffer, struct file *dtb);

#endif

#ifndef LINE_FUNCTIONS
#define LINE_FUNCTIONS

int addLine(char *lineName, struct file *dtb);
int renameLine(char *nwLineName, struct file *dtb);
int removeLine(char *lineName, struct file *dtb);

#endif
