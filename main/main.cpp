#include "main.h"

int main(int argc, char *argv[]) {
  if(argc < 2)
    error(TOO_MANY_ARG);
  if(argc == 2)
    scriptHandler(argv[argc]);
  else
    loadDatabase();
}
    
