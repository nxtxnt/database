#include "main.h"
#include "global.h"

int main(int argc, char *argv[]) {
  bool script;
  if(argc < 2)
    error(TOO_MANY_ARG);
  else if(argc == 2)
    if((loadDataBase(argv[argc], script = TRUE) < 0)
       return FAILURE;
  else
    if(loadDatabase('\0', script = FALSE) < 0)
       return FAILURE;
}
    
