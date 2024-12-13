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
#include <iomanip>

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

int dayOfWeek(int month, int day, int year);
/**
dayOfWeek - Computes the weekday of a given date.
@param year the year
@param month the month (1 = January ... 12 = December)
@param day the day of the month
@return the weekday (0 = Saturday ... 6 = Friday)
*/

int main()
{
	bool done = false;
	int day;
	int month;
	int year;
	string dOW;
	string monthName;

	string calendar[6] = { "                   1  2  3  4  5  6  7 ",
						   " 2  3  4  5  6  7  8  9 10 11 12 13 14 ",
						   " 9 10 11 12 13 14 15 16 17 18 19 20 21 ",
						   "16 17 18 19 20 21 22 23 24 25 26 27 28 ",
						   "23 24 25 26 27 28 29 30 31             ",
						   "30 31                                  " };
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
	*//*
	while (!done)
	{
		cout << "Please enter a month and a year or Q to quit: ";
		cin >> month >> year;

		if (cin.fail())
		{
			done = true;
			break;
		}

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
	*//*
	while (!done)
	{
		cout << "Please enter a date or Q to quit: ";
		cin >> month >> day >> year;
		int weekDay = dayOfWeek(month, day, year);
		if (cin.fail())
		{
			done = true;
			break;
		}

		switch (weekDay)
		{
		case 0: dOW = "Saturday"; break;
		case 1: dOW = "Sunday"; break;
		case 2: dOW = "Monday"; break;
		case 3: dOW = "Tuesday"; break;
		case 4: dOW = "Wednesday"; break;
		case 5: dOW = "Thursday"; break;
		case 6: dOW = "Friday"; break;
		}

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



		cout << dOW << ", " << monthName << ", " << year << endl;
	}*/
	while (!done)
	{
		cout << "Please enter a month and year or Q to quit: ";
		cin >> month >> year;

		if (cin.fail())
		{
			done = true;
			break;
		}

		int firstDay = dayOfWeek(month, 1, year);
		int days = daysInMonth(month, year);
		int cDay = 1;

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

		cout << "\n" << monthName << " " << year << endl;
		cout << "Su Mo Tu We Th Fr Sa" << endl;
		for (int i = 0; i < 6; i++) 
		{
			for (int j = 0; j < 7; j++) 
			{
				if (i == 0 && j < firstDay - 1) 
				{// If it's the first week and we're before the first day of the month
					cout << "   "; // Print empty space
				}
				else if (cDay <= days) 
				{ // If we're within the valid range of days for the month
					cout << setw(2) << cDay << " ";
					cDay++;
				}
			}
			cout << endl;
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

int dayOfWeek(int month, int day, int year)
{
	int weekDay;
	if (month == 1 || month == 2)
	{
		year--;
		month += 12;
	}
	weekDay = (day + (((month + 1) * 26) / 10) + year + (year / 4) + 6 * (year / 100) + (year / 400)) % 7;
	
	return weekDay;
}