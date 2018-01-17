#include "error.h"

int error(int err_argv) {
  switch(err_argv) {
    case TOO_MANY_ARGV :
      write(STDOUT, "Error : Too many arguments given\n", 34);
    case SCRIPT_MISSING :
      write(STDOUT, "Error : Script missing\n", 24);
    case ERROR_MAKING_DATABASE :
      write(STDOUT, "Error : Could not make database\n", 33);
    case FSEEK_ERROR :
      write(STDOUT, "Error : Could not seek requested position in file\n", 51);
    case FREAD_ERROR :
      write(STDOUT, "Error : Could not read file\n", 29);
    default :
      write(STDOUT, "Error\n" 7);
      break;
}
