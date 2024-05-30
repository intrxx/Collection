#include <iostream>
#include "..\Public\Numbers.h"

bool IsDigitPresent(int InNumber, const int NumberToCheck)
{
	while (InNumber > 0)
	{
		if (InNumber % 10 == NumberToCheck)
		{
			return true;
		}

		InNumber = InNumber / 10;
	}
	return false;
}

int CountNumberContainsAnotherNumber(const int Number, const int NumbersToCount)
{
	int Count = 0;
	for (int i = 1; i < NumbersToCount + 1; i++)
	{
		std::cout << "P ";
		if (i == Number || IsDigitPresent(i, Number))
		{
			std::cout << "P1 ";
			Count++;
		}
	}
	return Count;
}

void DisplayCountNumberContainsAnotherNumber()
{
	int Number = 0;
	int NumbersToCount = 0;

	std::cout << "Please enter your number: ";
	std::cin >> Number; 
	std::cout << std::endl;
	std::cout << "Please enter number to count to: ";
	std::cin >> NumbersToCount;
	std::cout << std::endl;

	int FinalCount = CountNumberContainsAnotherNumber(Number, NumbersToCount);
	
	std::cout << "Number " << NumbersToCount << " contains " << FinalCount << " of your number (" << Number << ")" << std::endl;
}