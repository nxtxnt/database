#include "shell.h"

int shell(file &dtb) {

}

int input(char *line[]) {
  clearCArray(&line);
  char buf(0);
  for(int i = 0; buf != '\n'; i++) {
    if(read(STDIN, *buf, 1) < 0) {
      error(ERROR_READING_INPUT);
      return FAILURE;
    }
    line[i] = buf;
  }
  return SUCCESS;
}

int clearCArray(char *c) {
  for(int i = 0; i < sizeof(c); i++)
    c[i] = NULL;
}
