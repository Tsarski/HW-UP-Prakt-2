// Zadacha5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void ZeroCheck(int num, int K)
{
	const int size = 100;
	int var = num;
	int binaryarr[size];
	int zeronumarr[size];
	int counter = -1, arrcount = 0, zerocount = 0;
	do
	{
		binaryarr[arrcount] = var % 2;
		var /= 2;
		counter++;
		arrcount++;
	} while (var >= 1);

	for (int i = 0, j = counter; i < arrcount / 2; i++, j--)
	{
		int t = binaryarr[i];
		binaryarr[i] = binaryarr[j];
		binaryarr[j] = t;
	}
	int tempcounter = 0;

	for (int e = 0; e < arrcount; e++)
	{
		if (binaryarr[e] == 0)
		{
			zerocount++;
		}
		else
		{
			zeronumarr[tempcounter] = zerocount;
			tempcounter++;
			zerocount = 0;
		}
	}

	for (int q = 0; q < size; q++)
	{
		if (zeronumarr[q] > zeronumarr[0])
		{
			zeronumarr[0] = zeronumarr[q];
		}
	}
	int statement = false;
	if (zeronumarr[0] >= K)
	{
		statement = true;
	}

	for (int y = 0; y < arrcount; y++)
	{
		std::cout << binaryarr[y];
	}

	if (statement)
	{
		std::cout << " - there are at least " << K << " zeros" << std::endl;
	}
	else
	{
		std::cout << " - there are less than " << K << " zeros" << std::endl;
	}
}



int main()
{
	int num = 0, K = 0;
	
	do
	{
	    std::cout << "Enter your number between 1 000 and 1 000 000: ";
		std::cin >> num;
	} while(num < 1000 || num>1000000);
	
	std::cout << "Enter minimum amount of consecutive zeros in binary: ";
	std::cin >> K;
	
	ZeroCheck(num, K);

	return 0;
}


