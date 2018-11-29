/*********************************************************************
** Author: Ryan Trapp
** Date: 11/23/2017
** Description: Interface, or header file, that defines a class called
** T3Reader.
*********************************************************************/

//T3READER_HPP is the T3Reader class specification file
#ifndef T3READER_HPP
#define T3READER_HPP

#include "Board.hpp"

//T3Reader class declaration
class T3Reader
{
    //Declare private and public data members
	private:
		Board autoGame;
		char playerMove = 'x';
		std::string gameName;

	public:
		T3Reader(); //default constructor
		T3Reader(char);
		bool readGameFile(std::string inputFile);
		void testFill ();

};
#endif
