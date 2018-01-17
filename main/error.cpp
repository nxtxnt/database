#include "error.h"

int error(int err_argv) {
  switch(err_argv) {
    case TOO_MANY_ARGV :
      write(STDOUT, "Error : Too many arguments given\n", 34);
    case SCRIPT_MISSING :
      write(STDOUT, "Error : Script Missing\n", 24);
    default :
      break;
}
