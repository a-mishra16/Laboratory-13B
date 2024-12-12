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
/*
isLeapYear – determines whether a given year is a leap year
under the Gregorian calendar.
@param year the year; expected to be >= 1582
@return true if year is a leap year; false otherwise
*/

int daysInMonth(int month, int year);
/**
daysInMonth – determines the number of days in a specified month
@param month the month; expected to be in the range [1..12]
@param year the year; expected to be >= 1582
@return either 28, 29, 30, or 31, based on month and (leap) year
*/

int main()
{
	bool done = false;
	int month;
	int year;
	/*while (!done) //Leap Year Loop
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
	*/
	while (!done)
	{
		cout << "Please enter a month and a year or Q to quit: ";
		cin >> month >> year;

		if (cin.fail())
		{
			done = true;
			break;
		}
		string monthName;
		switch (month)
		{
		case 1: monthName = "January"; break;
		case 2: monthName = "February"; break;
		case 3: monthName = "March"; break;
		case 4: monthName = "April"; break; 
		case 5: monthName = "May"; break;
		case 6: monthName = "June"; break;
		case 7: monthName = "July"; break;
		case 8: monthName = "August"; break;
		case 9: monthName = "September"; break;
		case 10: monthName = "October"; break;
		case 11: monthName = "November"; break;
		case 12: monthName = "December"; break;
		}

		cout << monthName << " " << year << " has " << daysInMonth(month, year) << " days." << endl;
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
int daysInMonth(int month, int year)
{
	if (month == 2 && isLeapYear(year) == false)
	{
		return 28;
	}
	else if (month == 2 && isLeapYear(year) == true)
	{
		return 29;
	}
	
	switch (month)
	{
	case 1: return 31; break;
	case 3: return 31; break;
	case 4: return 30; break;
	case 5: return 31; break;
	case 6: return 30; break;
	case 7: return 31; break;
	case 8: return 31; break;
	case 9: return 30; break;
	case 10: return 31; break;
	case 11: return 30; break;
	case 12: return 31; break;
	}
}