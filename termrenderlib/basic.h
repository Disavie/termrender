#ifndef TERMRENDERLIB_BASICH
#define TERMRENDERLIB_BASICH


 
void termrender_init();
void enableRawMode();
void disableRawMode();

void enableAlternateBuffer();
void disableAlternateBuffer();
void clearScreen();

void carriageReturn();

void cursorInvis();
void cursorVis();
int getCursorX();
int getCursorY();
void cursorSetX(int x);
void cursorSetY(int y);
void cursorReset();
void cursorSetPos(int x, int y);
#endif
