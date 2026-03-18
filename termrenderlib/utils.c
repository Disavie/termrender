#ifndef TERMRENDERLIB_UTILSH
#define TERMRENDERLIB_UTILSH

#include "utils.h"
#include <sys/ioctl.h>

int getTermWidth(){
    struct winsize sz;
    ioctl( 0, TIOCGWINSZ, &sz );
    return sz.ws_col;
}

int getTermHeight(){
    struct winsize sz;
    ioctl( 0, TIOCGWINSZ, &sz );
    return sz.ws_row;
}

#endif
