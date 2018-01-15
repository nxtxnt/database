#include "../main/global.h"
#include "scriptHandler.h"

#ifndef LOAD_HEADER
#define LOAD_HEADER

#define DATABASE_FILENAME "database.dat"

int loadDtb(char *scriptFile, bool script);
int chkIfDtb();
int mkDtb();
int getDtbSize();
int getLinesPos();

#endif
