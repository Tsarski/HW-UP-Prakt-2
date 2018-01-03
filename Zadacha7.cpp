// Zadacha7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int num = 11, count = 0, exitcount = 0, addnum = 11;

	do
	{
		if (count < 8)
		{
			if (num % 18 == 0)
			{
				exitcount++;
			}
			else
			{
				num += addnum;
			}
		}
		else
		{
			count = 0;
			num = ((num / 9) * 10) + 1;
			addnum = addnum * 10 + 1;
		}
		count++;

	} while (exitcount < 1);

	std::cout << "Smallest number that satisfies the conditions is: " << num / 18 << std::endl;

	return 0;
}

