#include <iostream>
#include "Public\Numbers.h"

int main() 
{
	int input = 0;

	while (true)
	{
		std::cout << "Choose what to do:" << std::endl;
		std::cin >> input;

		DisplayCountNumberContainsAnotherNumber();
		
		if (input == 0)
		{
			break;
		}
	}
}