#include <stdio.h>
#include <assert.h>

#include <basic.h>

int main(){

    termrender_init();
    printf("Test cursor vis\n");

    cursorInvis();
    sleep(1);
    cursorVis();

    printf("Test cursor reset\n");
    cursorReset();
    sleep(1);

    int x = getCursorX();
    int y = getCursorY();
    printf("Cursor is at x=%d, y=%d\n",x,y);

    cursorReset();

    printf("Test cursorSetX\n");
    sleep(1);
    cursorSetX(5);
    sleep(1);
    
    cursorReset();

    printf("Test cursorSetY\n");
    sleep(1);
    cursorSetY(10);
    sleep(1);

    cursorSetPos(20,20);
    sleep(1);

    //disableRawMode();
    disableAlternateBuffer();
    return 0;
}
