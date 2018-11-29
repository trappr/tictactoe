/*********************************************************************
** Author: Ryan Trapp
** Date: 11/23/2017
** Description: Do not submit this file
*********************************************************************/

#include <iostream>
#include "Menu.hpp"
#include "Board.hpp"

using std::cout;
using std::endl;

int main()
{
    Menu m1;
    do
    {
        char X = 'X', O = 'O';
        Board b1;
        do
        {
            b1.printBoard();
            b1.makeMove(m1.selectXRow(), m1.selectXCol(), X);
            b1.printBoard();
            b1.makeMove(m1.selectORow(), m1.selectOCol(), O);
        } while (b1.gameState() == 3);

    } while(m1.play());

}
