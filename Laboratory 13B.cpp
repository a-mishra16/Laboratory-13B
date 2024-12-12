/*
* Program: Laboratory 13B.cpp
* Author: Aanika Mishra
* Date 12-12-2024
* Description: This program will determine if a given year is a leap year, 
* return the number of days in a given month of a given year, return the day 
* of the week of a specific given day of a year, and displays a calendar 
* page of a given month of a given year. 
*/
#include <iostream>

using namespace std;

bool isLeapYear(int year);

int main()
{
	bool done = false;
	int year;
	while (!done)
	{
		cout << "Please enter a year or Q to quit: ";
		cin >> year;

		if (cin.fail())
		{
			done = true;
			break;
		}
		else
		{
			cout << year;
			if (isLeapYear(year) == true)
			{
				cout << " is a leap year." << endl;
			}
			else
			{
				cout << " is not a leap year." << endl;
			}
		}

	}
}

bool isLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}
	else if (year % 100 == 0 && year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}