// Zadacha9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isDivisible(int n)
{
	const int SIZE = 5;
	int arr[SIZE];
	int temp = n;
	int arrcount = 0, sum = 0;

	do
	{
		arr[arrcount] = temp % 10;
		temp = temp / 10;
		arrcount++;
	} while (temp > 0 && arrcount < 5);

	for (int i = 0; i < arrcount; i++)
	{
		sum += arr[i];
	}

	if (n%sum == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int N = 0;
	do
	{
		std::cout << "Enter a number between 111 and 22 222: ";
		std::cin >> N;
	} while(N < 111 || N>22222);

	bool statement = isDivisible(N);

	if (statement)
	{
		std::cout << "It is divisible" << std::endl;
	}
	else
	{
		std::cout << "It is not divisible" << std::endl;
	}


    return 0;
}

