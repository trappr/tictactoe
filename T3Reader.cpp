/*********************************************************************
** Author: Ryan Trapp
** Date: 11/23/2017
** Description: The following program calls methods from a class called
** T3Reader, defined in the header file "T3Reader.hpp", then defines and accesses
** data members for each T3Reader object.
*********************************************************************/

//#include statements for iostream library, filestream library and header file
#include <iostream>
#include <iomanip>
#include <fstream>
#include "T3Reader.hpp"
using namespace std;


T3Reader::T3Reader(char firstMove)
{
    playerMove = firstMove;

}

void T3Reader::testFill()
{
    char playerMove = 'x';

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            autoGame.makeMove(row, col, playerMove);

        }

    }
}
//get method to return the name of the person
bool T3Reader::readGameFile(string inputFile)
{
    ifstream dataIn;

    int row = 0, col = 0, count = 0;

	dataIn.open(inputFile);

	if (!dataIn)
    {
        cout << "Error opening data file." << endl;
    }

    else
    {
        /* do while loop reads in the values of the file and passes them as arguments to the makeMove method
        ** it then switches the payers turn after each move and looks to see if the makeMove function returns
        ** a false value. It loops until 9 turns are reached, the end of the file is reached, the game is finished
        ** due to a win or draw, or a false value is returned from makeMove */
        do
        {
            dataIn >> row;
            dataIn >> col;

            autoGame.makeMove(row, col, playerMove);

            if (!autoGame.makeMove(row, col, playerMove))
            {
                dataIn.close();
                return false;
            }

            if (playerMove == 'x')
                playerMove = 'o';

            else if (playerMove == 'o')
                playerMove = 'x';

            count++;

        } while (count < 9 && autoGame.gameState() == UNFINISHED);

    }

    if (dataIn >> row >> col)//this looks to see if there are still values in the file after the game is finished and returns a value of false if so
    {
        dataIn.close();
        return false;
    }

    dataIn.close();
    return true;
}
