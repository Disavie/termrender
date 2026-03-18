#ifndef TERMRENDERLIB_BASICH
#define TERMRENDERLIB_BASICH


#include <stdio.h>
//printf

#include <unistd.h>
// For sleep
 
int add(int a, int b);

double mymultiply(double a, double b);

void enableAlternateBuffer();
void disableAlternateBuffer();
#endif
