#include "load.h"

file dtb;

int loadDatabase(char *scriptFile, bool script) {
  if(chkIfDtb() < 0)
    return FAILURE;
  if(getDtbSize() < 0)
    return FAILURE;
}

int chkIfDtb() {
  int fd;
  if((fd = open(DATABASE_FILENAME, O_RDONLY)) < 0)
     if(mkDtb() < 0)
        return FAILURE;
  else
     dtb.desc = fd;
}

int mkDtb() {
  int fd;
  if((fd = open(DATABASE_FILENAME, O_RDONLY)) < 0)
    return FAILURE;
  else
    for(int i = 0; i < LINE_NUM; i++)
      write(fd, '\n', 1);
}

int getDtbSize() {
  if(lseek(dtb.fd, 0, SEEK_END) < 0)
    return FAILURE;
  int size;
  if((size = read(dtb.fd, 0, SEEK_CUR)) < 0)
    return FAILURE;
  else
    dtb.size = size;
}

int getLinesPos() {
}
