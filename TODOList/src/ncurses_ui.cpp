#include "include/ncurses_ui.h"

void ncurses_ui(void)
// This is just a test to mess around and get basic ncurses ui working
{
    std::string prompt = "write something (q to quit): ";
    int c = 0;

    initscr();
    noecho();
    raw();
    move(0,0);
    printw(prompt.c_str());
    refresh();

    do
    {
        c = getch();
        move(10, 0);
        clrtoeol();
        printw("Keycode: %d/char %c", c, c);
        move(0,0);
        printw(prompt.c_str());
        refresh();
    }while(c != 113);

    endwin();
}
