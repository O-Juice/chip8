#ifndef LOGGING_H
#define LOGGING_H
#include "gfx.h"

void logErr(const char*);
void logQuit(const char*);
void checkSDLError(int, const char*);

#endif