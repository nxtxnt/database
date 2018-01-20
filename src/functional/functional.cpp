#include "functional.h"

int hashFunction(char *lineName);

int seekLine(char *lineName, struct file *dtb) {

}

int buffer(int *lineName, char *buffer[], struct file *dtb);
int erase(int *lineName, struct file *dtb);
int writeInFile(char *line, char *buffer, struct file *dtb);
void updateStruct(struct file *dtb, int newLineSize);
