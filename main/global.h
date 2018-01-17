#ifdef _MINGW32_
  #define STDOUT 1
#ifdef _linux_
  #define STDOUT 0

#include <unistd.h>
#include <fcntl.h>

#define FAILURE -1
#define SUCCESS 0

#ifndef ERROR_HEADER
#define ERROR_HEADER

#define TOO_MANY_ARG -1
#define SCRIPT_MISSING -2
#define ERROR_MAKING_DATABASE -3
#define FSEEK_ERROR  -4
#define FREAD_ERROR -5

int error(int err_arg);

#endif


#ifndef FILE_STRUCT
#define FILE_STRUCT

#define LINE_NUM 100000

struct file {
  int desc;
  int size;
  int linePos[LINE_NUM];
};

#endif
