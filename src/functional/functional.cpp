#include "functional.h"

int hashFunction(char *lineName);

int seekLine(char *lineName, struct file *dtb) {
  void *null;
  if(int curPos = read(dtb->desc, 0, SEEK_CUR) < 0) {
    error(FREAD_ERROR);
    return FAILURE;
  }
  if((lseek(dtb->desc, (dtb->linePos[hashFunction(lineName)]) - (curPos), SEEK_CUR)) < 0) {
    error(FSEEK_ERROR);
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
     error(FREAD_ERROR);
     return FAILURE;
  }
}

int erase(int *lineName, struct file *dtb) {
  char null = '\0';
  for(int i = 0; i < (dtb->size) - (hashFunction(lineName)); i++)
    if((write(dtb->desc, *null, sizeof(null))) < 0) {
      error(FWRITE_ERROR);
      return FAILURE;
    }
  }
  return SUCCESS;
}
     
int writeInFile(char *line, char *buffer, struct file *dtb) {
  if((write(dtb->desc, *line, sizeof(line))) < 0) {
    error(FWRITE_ERROR);
    return FAILURE;
  }
  if((write(dtb->desc, *buffer, sizeof(buffer))) < 0) {
    error(FWRITE_ERROR);
    return FAILURE;
  }
  else
    return SUCCESS;
}

void updateStruct(struct file *dtb, char *line, int newLineSize) {
  dtb->size += newLineSize - dtb->linePos[hashFunction(line)];
  for(int i = dtb->linePos[hashFunction(line)+1]; i < LINE_NUM; i++)
    dtb->linePos[i] += newLineSize;
}

void clearArray(char *array[]) {
  array[0] = '\0';
}
