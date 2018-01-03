// Zadacha4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	const int maxsize = 105, columns = 2;
	int N = 0;
	
	double arr[maxsize][columns];

	do
	{
		std::cout << "Enter number of pairs you'd like to calculate:" << ' ';
		std::cin >> N;
		
		if (N < 5 || N>105)
		{
			std::cout << "The number of pairs must be at least 5 and max 105" << std::endl;
		}

	} while (N < 5 || N > 105);
    
	int paircount = 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			do
			{
				std::cout << "Enter element " << j + 1 << " of pair number " << paircount << ": ";
				std::cin >> arr[i][j];
				
				if (arr[i][j] < 10 || arr[i][j] > 99)
				{
					std::cout << "The element must be between 10 and 99" << std::endl;
				}

			} while (arr[i][j] < 10 || arr[i][j] > 99);
		}
		paircount++;
	}

	for (int y = 0; y < N; y++)
	{
		double divided = 0;
		divided = arr[y][0] / arr[y][1];
		
		int percent = 0;
		percent = divided * 100;

		std::cout << arr[y][0] << "/" << arr[y][1] << " = " << percent << "%" << std::endl;
	}

	return 0;
}

