// Zadacha8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int Fibonacci(int n)
{
	int arr[40] = { 1, 1, 2 };

	for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr[n-1];
}


int main()
{
	int arr[40] = { 1, 1, 2 };
	int N = 0;

	do
	{
		std::cout << "Enter a number from 1 to 40: ";
		std::cin >> N;
	} while (N<1 || N>40);

	std::cout << "The number in Fiboacci row is: " << Fibonacci(N) << std::endl;

	return 0;
}

