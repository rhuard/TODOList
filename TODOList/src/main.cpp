#include "include/repl_ui.h"
#include "include/ncurses_ui.h"

int main()
{
   // basic ui setup scratch pad functions
   ncurses_mode();
   repl_mode();
   return 0;
}
