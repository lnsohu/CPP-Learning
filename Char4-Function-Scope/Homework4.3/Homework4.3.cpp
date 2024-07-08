// Homework4.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool leapYear(int);
int calculateDays(int, int);
bool isLeapYear;

int _tmain(int argc, _TCHAR* argv[])
{
	int year, month, date, days;

	cout << "Please input year: ";
	cin >> year;
	if(year < 0)
	{
		cout << "\nPlease input a year greater than 0: " << endl;
		exit;
	}
	isLeapYear = leapYear(year);

	cout << "\nPlease input month: ";
	cin >> month;

	cout << "\nPlease input date: ";
	cin >> date;

	if(month < 1 || month > 12)
	{
		cout << "\nThe input month is invalid" << endl;
		exit;
	}
	else if(date < 1 || date > 31)
	{
		cout << "\nPlease input a valid date: " << endl;
		exit;
	}
	else if(month == 2)
	{
		if(isLeapYear)
		{
			if(date > 29)
			{
				cout << "\nFeb. in leap year cannot be more than 29 days." << endl;
				exit;
			}
		}
		else
		{
			if(date > 28)
				cout << "\nFeb. in regular year cannot be more than 28 days." << endl;
		}
	}
	else if((month == 4 || month == 6 || month == 9 || month == 11) && date > 30)
	{
		cout << "This month cannot be more than 30 days." << endl;
		exit;
	}

	days = calculateDays(month, date);
	cin >> days;
	return days;
}

bool leapYear(int year)
{
	
	if(year % 4 == 0)
	{
		if(year % 400 == 0)
			isLeapYear = true;
		else if(year % 100 == 0)
			isLeapYear = false;
		else
			isLeapYear = true;
	}
	else
	{
		isLeapYear = false;
	}
	cout << year << " is leap year? " << isLeapYear;
	return isLeapYear;
}

int calculateDays(int month, int date)
{
	int days(0);
	for(int i(1); i < month; i++)
	{
		if(i == 4 || i == 6 || i == 9 || i == 11)
			days += 30;
		else if(i == 2)
		{
			if(isLeapYear)
				days += 29;
			else
			{
				days += 28;
			}
		}
		else
		{
			days += 31;
		}
	}
	days += date;
	cout << "The days: " << days << endl;
	return days;
}
