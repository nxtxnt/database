#ifdef _MINGW32_
  #define STDIN 1
#ifdef _linux_
  #define STDIN 0

#include <unistd.h>
#include <fcntl.h>

#define FAILURE -1
#define SUCCESS 0

#ifndef ERROR_HEADER
#define ERROR_HEADER

int error(int err_arg);

#endif

#define TOO_MANY_ARG -1
#define SCRIPT_MISSING -2
