#include ../main/global.h"

#ifndef LINE_FUNCTIONS
#define LINE_FUNCTIONS

int addLine(char *lineName, struct file &dtb);
int renameLine(char *nwLineName, struct file &dtb);
int removeLine(char *lineName, struct file &dtb);

#endif
