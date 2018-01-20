#include "../main/global.h"

#ifndef SHELL_HEADER
#define SHELL_HEADER

int shell(struct file &dtb);

int input(char *line[]);
void clearCArray(char *c);

#endif

#ifndef LINE_FUNCTIONS
#define LINE_FUNCTIONS

int lineInterpreter(char *line, strut file &dtb);

char *instruction[9] = {"ADD_LINE", "ADD_ATTR", "ADD_OBJECT", "SET", "IN_LINE", "IN_OBJ", "REM_LINE", "REM_ATTR", "REM_OBJ"};

#define INSTRCUTION_1 0
#define INSTRCUTION_2 1
#define INSTRCUTION_3 2
#define INSTRCUTION_4 3
#define INSTRCUTION_5 4
#define INSTRCUTION_6 5
#define INSTRCUTION_7 6
#define INSTRCUTION_8 7
#define INSTRCUTION_9 8

#endif
