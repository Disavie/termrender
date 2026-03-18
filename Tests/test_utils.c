#include <utils.h>
#include <basic.h>
#include <stdio.h>
int main(){
    termrender_init(); 
    int width = getTermWidth();
    int height = getTermHeight();

    printf("Terminal is %d x %d\n",width,height);

    cursorSetPos(0,0);
    sleep(1);
    cursorSetPos(0,height);
    sleep(1);
    cursorSetPos(width,height);
    sleep(1);
    cursorSetPos(width,0);
    sleep(1);

    cursorReset();
    printf("Testing setting cursor position too far outside terminal");
    cursorSetPos(width+50,height+50);
    sleep(1);

    return 0;
}
