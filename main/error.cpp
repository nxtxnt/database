#include "error.h"

int error(int err_argv) {
  switch(err_argv) {
    case TOO_MANY_ARGV :
      write(STDIN, "Error : Too many arguments given\n", 34);
    case SCRIPT_MISSING :
      write(STDIN, "Error : Script Missing\n", 24);
    default :
      break;
}
