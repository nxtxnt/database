#include "functional.h"

int addLine(char *lineName, char *line, struct file &dtb) {
  char *buffer;
  seekLine(lineName, &dtb);
  buffer(lineName, &buffer, &dtb);
  seekLine(lineName, &dtb);
  erase(lineName, &dtb);
  seekLine(lineName, &dtb);
  writeInFile(line, buffer, &dtb);
  updateStruct(&dtb, sizeof(line));
  clearArray(&buffer);
}

int renameLine(char *nwLineName, struct file &dtb) {

}

int removeLine(char *lineName, struct file &dtb) {

}
