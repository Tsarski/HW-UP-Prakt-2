// Zadacha10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int arr[1005];
	for (int y = 0; y < 1005; y++)
	{
		arr[y] = 0;
	}
	
	int N = 0, K = 0;

	do
	{
		std::cout << "Enter number of guests (beween 40 and 10040):" << ' ';
		std::cin >> N;
	} while (N < 40 || N>10040);

	do
	{
		std::cout << "Enter room capacity (between 10 and 20):" << ' ';
		std::cin >> K;
	} while (K < 10 || K>20);

	int equality = 0;
	
	if (N%K == 0)
	{
		equality = N / K;
	}
	else
	{
		equality = N / K + 1;
	}
	int count = 0;

	while (N > 0)
	{
		arr[count] += 1;
		count++;
		N -= 1;
		if (count == equality)
		{
			count = 0;
		}
	}

	for (int i = 0; i < equality; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

    return 0;
}

