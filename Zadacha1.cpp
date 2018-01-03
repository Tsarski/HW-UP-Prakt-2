// Zadacha1.cpp : Defines the entry point for the console application.
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
	
	int evenarr[3][6];
	int sum = 0, countline = 0, countcol = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i % 2 != 0)
			{
				sum += arr[i][j];
				evenarr[countline][countcol] = arr[i][j];
				countcol++;
			}
			if (countcol > 5)
			{
				countline++;
				countcol = 0;
			}
		}
	}

	int sumarr[3];
	int sumcount = 0;
	for (int y = 0; y < 3; y++)
	{
		int varsum = 0;
		for (int u = 0; u < 6; u++)
		{
			varsum += evenarr[y][u];
		}
		sumarr[sumcount] = varsum;
		sumcount++;
	}
	sumcount = 0;

	for (int m = 0; m < 3; m++)
	{
		for (int n = 0; n < size; n++)
		{
			std::cout << evenarr[m][n] << ' ';
		}
		std::cout << "Sum = " << sumarr[sumcount] << std::endl;
		sumcount++;
	}

	std::cout << "The whole sum is: " << sum << std::endl;
	
    return 0;
}

