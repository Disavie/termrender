#ifndef TERMRENDERLIB_BASICC
#define TERMRENDERLIB_BASICC

#include "basic.h"

void enableAlternateBuffer(){
    printf("\033[?1049h");
    fflush(stdout);
}
void disableAlternateBuffer(){
    printf("\033[?1049l");
    fflush(stdout);
}
void carriageReturn(){
    printf("\r");
    fflush(stdout);
}



#endif
