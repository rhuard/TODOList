#include <string>
#include <iostream>
#include <ctype.h>
#include <ncurses.h>

using std::cout;
using std::cin;

void ncurses_mode(void)
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

void repl_mode(void)
// This is just a basic test to mess around wtih a basic repl ui
{
    std::string prompt = "> ";
    char c;
    do
    {
        cout << prompt;
        cin >> c;
        cout << c << "\n";
    }while(c != 113);
}

int main()
{
   // basic ui setup scratch pad functions
   ncurses_mode();
   repl_mode();
   return 0;
}
