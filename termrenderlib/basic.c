#ifndef TERMRENDERLIB_BASICC
#define TERMRENDERLIB_BASICC

#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>



#include "basic.h"
#include "utils.h"

void termrender_init(){
    enableRawMode();
    enableAlternateBuffer();
    clearScreen();
}

struct termios orig;

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &orig);

    atexit(disableRawMode);

    struct termios raw = orig;
    raw.c_lflag &= ~(ECHO | ICANON);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig);
}

void enableAlternateBuffer(){
    printf("\033[?1049h");
    fflush(stdout);
}
void disableAlternateBuffer(){
    printf("\033[?1049l");
    fflush(stdout);
}
void clearScreen(){
    printf("\033[2J");
    fflush(stdout);

}
void carriageReturn(){
    printf("\r");
    fflush(stdout);
}

void cursorInvis(){
    printf("\033[?25l");
    fflush(stdout);
}
void cursorVis(){
    printf("\033[?25h");
    fflush(stdout);
}

void cursorReset(){
    printf("\033[H");
    fflush(stdout);
}

int getCursorX() {
    char buf[32];
    int i = 0;

    printf("\033[6n");
    fflush(stdout);

    while (i < sizeof(buf) - 1) {
        if (read(STDIN_FILENO, &buf[i], 1) != 1) {
            return -1;
        }
        if (buf[i] == 'R') {
            break;
        }
        i++;
    }

    buf[i + 1] = '\0';

    int row, col;
    sscanf(buf, "\033[%d;%dR", &row, &col);

    return col;
}
int getCursorY() {
    char buf[32];
    int i = 0;

    printf("\033[6n");
    fflush(stdout);

    while (i < sizeof(buf) - 1) {
        if (read(STDIN_FILENO, &buf[i], 1) != 1) {
            return -1;
        }
        if (buf[i] == 'R') {
            break;
        }
        i++;
    }

    buf[i + 1] = '\0';

    int row, col;
    sscanf(buf, "\033[%d;%dR", &row, &col);

    return row;
}
void cursorSetX(int x){
    cursorInvis();
    int y = getCursorY();
    // ESC[<lineno>;<colno>H
    printf("\033[%d;%dH",y,x);
    fflush(stdout);
    cursorVis();
}
void cursorSetY(int y){
    cursorInvis();
    int x = getCursorX();
    printf("\033[%d;%dH",y,x);
    fflush(stdout);
    cursorVis();
}

void cursorSetPos(int x, int y){
    cursorSetX(x);
    cursorSetY(y);
}




#endif
