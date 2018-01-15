#include "main.h"
#include "global.h"

int main(int argc, char *argv[]) {
  if(argc < 2)
    error(TOO_MANY_ARG);
  else if(argc == 2)
    if((scriptHandler(argv[argc]) < 0)
       return FAILURE;
  else
    if(loadDatabase() < 0)
       return FAILURE;
}
    
