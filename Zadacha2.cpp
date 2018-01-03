// Zadacha2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	const int size = 6;
	int arr[size][size] = { 11,12,13,14,15,16,
							21,22,23,24,25,26,
							31,32,33,34,35,36,
							41,42,43,44,45,46,
							51,52,53,54,55,56,
							61,62,63,64,65,66 };
	int sumline = 0;
	int lastinline = 0;
    int sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] % 2 != 0)
			{
				lastinline = arr[i][j];
				sum += arr[i][j];
				sumline += arr[i][j];
			}
		}
		std::cout << lastinline - 4 << ", " << lastinline - 2 << ", " << lastinline << " Sum of line: " << sumline << std::endl;
		sumline = 0;
	}
	std::cout << "Sum of all uneven numbers: " << sum << std::endl;

return 0;
}

