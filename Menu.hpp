#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>


class Menu
{
    public:
        Menu();
        ~Menu();
        int selectXRow();
        int selectXCol();
        int selectORow();
        int selectOCol();
        bool play();
        int intValidation();

    private:
        int choice;
};

#endif
