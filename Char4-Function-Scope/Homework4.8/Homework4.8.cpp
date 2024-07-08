// Homework4.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char sFromInt[100];
static int i(0);

char iToC(int);
void iToS(int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	int number, temp(0), length(0);
	cout << "Please input a number: ";
	cin >> number;
	temp = number;

	do
	{
		temp /= 10;
		length++;
	}
	while (temp > 10);

	iToS(number, length);
	cin >> number;
	return 0;
}

void iToS(int n, int l)
{
	int digit(0), div = pow(10, l);

	if(n < 10)
	{
		sFromInt[i] = iToC(n);
		cout << "i: " << i << "\t" << sFromInt[i] << "\t" << sFromInt << endl;
		cout << "\nFinal result: " << sFromInt << endl;
	}
	else
	{
		digit = n / div;
		sFromInt[i] = iToC(digit);
		cout << "i: " << i << "\t" << sFromInt[i] << "\t" << sFromInt << endl;
		n -= digit * pow(10, l);
		l--;
		i++;
		iToS(n, l);
	}	
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