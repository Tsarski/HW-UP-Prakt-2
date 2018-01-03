// Zadacha3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	const int SIZE = 100;
	int R = 0, K = 0;

	int arr1[SIZE][SIZE];
	int arr2[SIZE][SIZE];

	do
	{
		std::cout << "Number of lines in array 1 (between 3 and 10): ";
		std::cin >> R;
	} while (R < 3 || R>10);

	do
	{
		std::cout << "Number of columns in array 1 (between 3 and 10): ";
		std::cin >> K;
	} while (K < 3 || K>10);

	for (int i = 0, y = 0 ; i < R, y < R; i++, y++)
	{
		for (int j = 0, u = 0; j < K, u < K; j++, u++)
		{
			do
			{ 
				std::cout << "Enter value of arr1[" << i << "][" << j << "]: ";
				std::cin >> arr1[i][j];
			} while (arr1[i][j] < 0 || arr1[i][j] > 22);

			arr2[y][u] = 1;
		}
	}
	
	int finalarr[SIZE][SIZE];
	int sumarr2 = 0;
	sumarr2 = (R * K) * arr2[0][0];

	for (int h = 0, k = 0; h < R, k < R; h++, k++)
	{
		for (int m = 0, n = 0; m < K, n < K; m++, n++)
		{
			finalarr[h][m] = arr1[k][n]*sumarr2;
		}
	}

	for (int q = 0; q < R; q++)
	{
		for (int e = 0; e < K; e++)
		{
			std::cout << finalarr[q][e] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

    return 0;
}

