#include "global.h"

int input(char *in[]) {
  char cBuf = NULL;
  for(int i = 0; cBuf != '\n'; i++) {
    if((read(STDIN, cBuf, 1)) < 0) {
      error(FREAD_ERROR);
      return FAILURE;
    }
    in[i] = cBuf;
  }
  return SUCCESS;
}
