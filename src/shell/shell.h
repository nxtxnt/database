#include "../main/global.h"

#ifndef SHELL_HEADER
#define SHELL_HEADER

int shell(struct file &dtb);

int input(char *line[]);
int clearCArray(char *c);

#endif

#ifndef LINE_FUNCTIONS
#define LINE_FUNCTIONS

int lineInterpreter(char *line, strut file &dtb);

char *instruction[9] = {"ADD_LINE", "ADD_ATTR", "ADD_OBJECT", "SET", "IN_LINE", "IN_OBJ", "REM_LINE", "REM_ATTR", "REM_OBJ"};

#define INSTRCUTION_1 instruction[0]
#define INSTRCUTION_2 instruction[1]
#define INSTRCUTION_3 instruction[2]
#define INSTRCUTION_4 instruction[3]
#define INSTRCUTION_5 instruction[4]
#define INSTRCUTION_6 instruction[5]
#define INSTRCUTION_7 instruction[6]
#define INSTRCUTION_8 instruction[7]
#define INSTRCUTION_9 instruction[8]

#endif
