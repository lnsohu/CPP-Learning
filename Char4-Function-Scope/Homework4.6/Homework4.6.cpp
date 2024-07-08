// Homework4.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char * intToS(int);
int myStrlen(char *);
char iToC(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int number;
	cout << "Please input a 5 digits number: ";
	cin >> number;
	if(number < 10000 || number > 99999)
	{
		cout << "Invalid input." << endl;
	}
	else
	{
		char result[100];
		strcpy_s(result, 100, intToS(number));

		cout << "The converted string is: " << result << endl;
		cout << "The length is: " << myStrlen(result);
	}

	cin >> number;
	return 0;
}

char * intToS(int number)
{
	static int i(0), j(0);
	char s[100] = " ";
	int digit(0), div(10000);

	for(i = 0; i < 9; i++)
	{
		digit = (number / div) % 10;
		s[i] = iToC(digit);
		j++;
		if(j == 5)
			break;
		i++;
		s[i] = ' ';
		div /= 10;
	}
	return s;
}

char iToC(int d)
{
	switch (d)
	{
	case 0:
		return '0';
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	default:
		break;
	}
}

int myStrlen(char * s)
{
	int len(0);
	for(int i(0); s[i] != '\0'; i++)
	{
		len++;
	}

	return len;
}