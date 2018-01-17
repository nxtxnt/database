#include "scriptHandler.h"

int scriptHander(char *fileName, struct file &dtb) {
  char *line;
  char bufC;
  int checkIfChar(0);                                       //checks whether the file is terminated or not
  int fd;
  if((fd = open(filename, O_RDONLY)) < 0)
    error(NULL);
  int i = 0;
  while(!(checkIfChar < 0))
    checkIfChar = read(fd, *bufC, 1);
    if(bufC == '\n') {
      i = 0;
      int lineInterpreter(char *line, strut file &dtb);
    }
    else {
      line[i] = bufC;
      i++;
    }
}
