#include "functional.h"

int hashFunction(char *lineName);

int seekLine(char *lineName, struct file *dtb) {
  void *null;
  if(int curPos = read(dtb->desc, 0, SEEK_CUR) < 0) {
    error(ERROR_READING_FILE);
    return FAILURE;
  }
  if((lseek(dtb->desc, (dtb->linePos[hashFunction(lineName)]) - (curPos), SEEK_CUR)) < 0) {
    error(ERROR_READING_FILE);
    return FAILURE;
  }
  else
    return SUCCESS;
}

int buffer(int *lineName, int endRead, char *buffer[], struct file *dtb) {
  int end;
  switch(endRead) {
    case dtb->size :
      end = dtb->size;
    default :
      end = dtb->linePos[endRead]-1;
  }
  if((read(dtb->desc, *buffer, (end) - (hashFunction(lineName))) < 0)
     error(ERROR_READING_FILE);
     return FAILURE;
  }
}

int erase(int *lineName, struct file *dtb);
int writeInFile(char *line, char *buffer, struct file *dtb);
void updateStruct(struct file *dtb, int newLineSize);
