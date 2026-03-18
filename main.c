#include "termrenderlib/basic.c"
#include "termrenderlib/basic.h"
#include <stdio.h>
#include <basic.h>
int main(int argc, char ** argv){

    printf("Hello World!\n");

    enableAlternateBuffer();
    printf("Test");
    carriageReturn();
    sleep(2);
    disableAlternateBuffer();

    return 0;
}
