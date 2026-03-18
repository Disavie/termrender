#include "termrenderlib/basic.c"
#include "termrenderlib/basic.h"
#include <stdio.h>
#include <basic.h>
int main(int argc, char ** argv){

    printf("Hello World!\n");

    int x = add(1,2);
    printf("%d\n",x);

    double c = mymultiply(1.5,2.0);
    printf("%f\n",c);
    enableAlternateBuffer();
    sleep(2);
    disableAlternateBuffer();

    return 0;
}
