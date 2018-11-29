/*********************************************************************
** Author: Ryan Trapp
** Date: 11/23/2017
** Description: Do not submit this file
*********************************************************************/

#include <iostream>
#include "T3Reader.hpp"

using std::cout;
using std::endl;

int main()
{
T3Reader game('x');
Board b1;

game.readGameFile("testFile.txt");
//if (test)
  // << "pass\n";
//else
  //cout << "fail\n";
game.testFill();
//b1.makeMove(0, 0, 'x');
//b1.makeMove(2, 2, 'o');

b1.printBoard();
cout << endl;


cout << endl;


   return 0;
}
