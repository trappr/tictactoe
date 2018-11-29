/*********************************************************************
** Program name: Menu.cpp
** Author: Ryan Trapp
** Date: 11/12/2018
** Description: The following program calls methods from a class called Menu, defined
** in the header file "Menu.hpp". Functions are used to prompt user for info and display
** game results.
*********************************************************************/

//#include statements for iostream, string and limits library and header file
#include "Menu.hpp"

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

Menu::Menu()
{

}

//The Menu select function prompts a user to pick a type of fighter from the list.
int Menu::selectXRow()
{
    int row;

    std::cout << "***Player X***" << std::endl;

    std::cout << "Please pick a row: ";
    std::cin >> row;

    return row;

//    choice = intValidation();
//
//    while (choice < 1 || choice > 5)
//    {
//        std::cout << std::endl << "Invalid input. Please enter a choice 1 - 5: ";
//        choice = intValidation();
//    }
//
//    return choice;
}

int Menu::selectXCol()
{

    int column;

    std::cout << "***Player X***" << std::endl;

    std::cout << "Please pick a column: ";
    std::cin >> column;

    return column;

//    choice = intValidation();
//
//    while (choice < 1 || choice > 5)
//    {
//        std::cout << std::endl << "Invalid input. Please enter a choice 1 - 5: ";
//        choice = intValidation();
//    }
//
//    return choice;
}

//The Menu select function prompts a user to pick a type of fighter from the list.
int Menu::selectORow()
{
    int row;

    std::cout << "***Player O***" << std::endl;

    std::cout << "Please pick a row: ";
    std::cin >> row;

    return row;

//    choice = intValidation();
//
//    while (choice < 1 || choice > 5)
//    {
//        std::cout << std::endl << "Invalid input. Please enter a choice 1 - 5: ";
//        choice = intValidation();
//    }
//
//    return choice;
}

int Menu::selectOCol()
{
    int column;

    std::cout << "***Player O***" << std::endl;

    std::cout << "Please pick a column: ";
    std::cin >> column;

    return column;

//    choice = intValidation();
//
//    while (choice < 1 || choice > 5)
//    {
//        std::cout << std::endl << "Invalid input. Please enter a choice 1 - 5: ";
//        choice = intValidation();
//    }
//
//    return choice;
}

//Boolean function asking user to play or exit
bool Menu::play()
{
    int selection;

    std::cout << std::endl << "1. Play" << std::endl;
    std::cout << "2. Exit" << std::endl << std::endl;
    std::cout << "Please choose your preferred option: ";
    std::cin >> selection;// = intValidation();

    while (selection < 1 || selection > 2)
    {
        std::cout << std::endl << "Invalid input. Please enter either 1 or 2: ";
        selection = intValidation();
    }

    if (selection == 1)
    {
        std::cout << std::endl;
        return true;
    }

    else
    {
        std::cout << std::endl << "This program will now quit." << std::endl << std::endl;
        return false;
    }

}

//Validation function takes the input as a string variable and then uses a loop to parse through each character to determine
//if it is an integer. If so, it is sent to stoi function to turn it back to the correct int. If not, an error is shown and
//user is re-prompted to input value. This function is borrowed from Thomas Hart via the code sharing thread in Piazza.
int Menu::intValidation()
{
    bool isInt = true;
	std::string input;
	std::getline(std::cin, input);
    //for loop to iterate through each character to check for int
	for(unsigned int i = 0; i < input.size(); i++)
	{
		if(!(isdigit(input.at(i))))
			isInt = false;
	}
    //if a character that is not an int is found an error is presented and the user is re-prompted
	while(!isInt)
	{
		std::cout << "Invalid input. Only numbers can be accepted. Please choose a new selection: ";
		std::getline(std::cin, input);
		//reset bool to true for default case
		isInt = true;
		//check user input
		for(unsigned int i = 0; i < input.size(); i++)
		{
			if(!(isdigit(input.at(i))))
				isInt = false;
		}
	}
	//use stoi to return int variable value
	return 1;//stoi(input);
}

Menu::~Menu()
{
    //destructor
}
