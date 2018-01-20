#include "shell.h"

int shell(file &dtb) {
  char *line;
  while(line != "END") {
    write(STDOUT, ">>> ", 5);
    input(&line);
  }
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

void clearCArray(char *c) {
  c[0] = "\0";
}
