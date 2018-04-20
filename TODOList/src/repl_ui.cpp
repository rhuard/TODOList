#include "include/repl_ui.h"

void repl_ui(void)
// This is just a basic test to mess around wtih a basic repl ui
{
    std::string prompt = "> ";
    char c;
    do
    {
        std::cout << prompt;
        std::cin >> c;
        std::cout << c << "\n";
    }while(c != 113);
}
