#include "functional.h"

int addLine(char *lineName, char *line, struct file &dtb) {
  char *buffer;
  if((seekLine(lineName, &dtb))) < 0)
    return FAILURE;
  if((buffer(lineName, &buffer, &dtb))) < 0)
    return FAILURE;
  if((seekLine(lineName, &dtb))) < 0)
    return FAILURE;
  if((erase(lineName, &dtb))) < 0)
    return FAILURE;
  if((seekLine(lineName, &dtb))) < 0)
    return FAILURE;
  if((writeInFile(line, buffer, &dtb))) < 0)
    return FAILURE;
  updateStruct(&dtb, sizeof(line));
  clearArray(&buffer);
}

int renameLine(char *nwLineName, struct file &dtb) {

}

int removeLine(char *lineName, struct file &dtb) {

}
