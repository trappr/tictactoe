/*********************************************************************
** Author: Ryan Trapp
** Date: 11/23/2017
** Description: Interface, or header file, that defines a class called
** Board.
*********************************************************************/

//BOARD_HPP is the Board class specification file
#ifndef BOARD_HPP
#define BOARD_HPP

enum State {X_WON, O_WON, DRAW, UNFINISHED};

//Board class declaration
class Board
{
    //Declare private and public data members
	private:
		char locationChar[3][3];
		char mark = 'x';//parallel arrays to mark an X or O in a square
		State outcome;
		char player;
		int numTurns;

	public:
		Board(); //default constructor
		bool makeMove(int, int, char);
		State gameState();
		void printBoard();
};
#endif

