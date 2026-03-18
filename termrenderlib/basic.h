#ifndef TERMRENDERLIB_BASICH
#define TERMRENDERLIB_BASICH


#include <stdio.h>
//printf

#include <unistd.h>
// For sleep
 

void enableAlternateBuffer();
void disableAlternateBuffer();
void carriageReturn();
#endif
