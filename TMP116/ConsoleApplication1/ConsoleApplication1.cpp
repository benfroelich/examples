// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//class TMP116 

int main()
{
	std::cout << "hi";

	/////////////////////////////// wait for user input
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
    
	return 0;
}

