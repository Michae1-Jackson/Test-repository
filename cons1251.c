#include <windows.h>

static int oldin = 0, oldout = 0;

static void exitfunc() {
    SetConsoleCP(oldin); 
    SetConsoleOutputCP(oldout);
}

void cons1251 () {
    if (oldin)
        return;

    atexit(exitfunc);

    oldin = GetConsoleCP();
    oldout = GetConsoleOutputCP();
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}