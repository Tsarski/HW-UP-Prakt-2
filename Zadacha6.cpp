// Zadacha6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	long num = 1;
	int count = 0;
	long arr[4];
	do
	{
		if (num % 2 == 1 && num % 3 == 2 && num % 4 == 3 && num % 5 == 4 && num % 6 == 5 && num % 7 == 6 && num % 8 == 7 && num % 9 == 8)
		{
			arr[count] = num;
			count++;
		}
		num++;
	} while (count < 4);

	for (int i=0; i < 4; i++)
	{
		std::cout << arr[i] << ' ';
	}
    return 0; 

}

