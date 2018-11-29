/*********************************************************************
** Author: Ryan Trapp
** Date: 11/23/2017
** Description: The following program calls methods from a class called
** Board, defined in the header file "Board.hpp", then defines and accesses
** data members for each Board object in order to play a game of tic-tac-toe.
*********************************************************************/

//#include statements for iostream library and header file
#include <iostream>
#include <iomanip>
#include "Board.hpp"

//default constructor initializes the board with blank spaces and integers of zeros, as well as setting the number of
//turns to zero
Board::Board()
{

    for (int row=0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            locationChar[row][col] = ' ';
        }

    }

    numTurns = 0;

}

/*********************************************************************************************
** boolean method to determine if a board space is empty and if so either mark 'X' or 'O'
** depending on the player's turn being passed in and return a true value. If the space is filled
** a value of false is returned.
************************************************************************************************/
bool Board::makeMove(int row, int column, char player)
{


	locationChar[row][column] = player;
	numTurns++;

	return true;

	if (locationChar[row][column] == ' ')
    {//std::cout << std::endl;
        if (player == 'x'){

            locationChar[row][column] = 'x';

            numTurns++;
        }

        else if (player == 'o')
        {
            locationChar[row][column] = 'o';

            numTurns++;
        }

        return true;
    }

    else
        return false;

}

//method to look at the state of the board and return a value either X_WON, O_WON, UNFINISHED, or DRAW
State Board::gameState()
{

    if (numTurns >= 9)
        return DRAW;

    else if (numTurns < 9)
    {

        if (locationChar[0][0] == 'x' && locationChar[0][1] == 'x' && locationChar[0][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[0][0] == 'o' && locationChar[0][1] == 'o' && locationChar[0][2] == 'o')
        {
            return O_WON;
        }

		else if (locationChar[1][0] == 'x' && locationChar[1][1] == 'x' && locationChar[1][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[1][0] == 'o' && locationChar[1][1] == 'o' && locationChar[1][2] == 'o')
        {
            return O_WON;
        }

		else if (locationChar[2][0] == 'x' && locationChar[2][1] == 'x' && locationChar[2][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[2][0] == 'o' && locationChar[2][1] == 'o' && locationChar[2][2] == 'o')
        {
            return O_WON;
        }

		else if (locationChar[0][0] == 'x' && locationChar[1][0] == 'x' && locationChar[1][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[0][0] == 'o' && locationChar[1][0] == 'o' && locationChar[1][2] == 'o')
        {
            return O_WON;
        }

		else if (locationChar[0][1] == 'x' && locationChar[1][1] == 'x' && locationChar[2][1] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[0][1] == 'o' && locationChar[1][1] == 'o' && locationChar[2][1] == 'o')
        {
            return O_WON;
        }

		else if (locationChar[0][2] == 'x' && locationChar[1][2] == 'x' && locationChar[2][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[0][2] == 'o' && locationChar[1][2] == 'o' && locationChar[2][2] == 'o')
        {
            return O_WON;
        }

        else if (locationChar[0][0] == 'x' && locationChar[1][1] == 'x' && locationChar[2][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[0][0] == 'o' && locationChar[1][1] == 'o' && locationChar[2][2] == 'o')
        {
            return O_WON;
        }

        else if (locationChar[2][0] == 'x' && locationChar[1][1] == 'x' && locationChar[0][2] == 'x')
        {
            return X_WON;
        }

        else if (locationChar[2][0] == 'o' && locationChar[1][1] == 'o' && locationChar[0][2] == 'o')
        {
            return O_WON;
        }

        else
            return UNFINISHED;
    }

    else
        return UNFINISHED;
}
//test method to print out the filled squares of the board
void Board::printBoard()
{
    //Nested for loop to print out contents of locationChar array

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << std::setw(5) << " | " << locationChar[row][col];

        }

        std::cout << std::endl;
    }
}
