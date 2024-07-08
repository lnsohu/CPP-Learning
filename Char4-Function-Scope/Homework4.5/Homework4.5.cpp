// Homework4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

static int i(0);
static bool neg;
int cToI(char);
int hexToDec(char *);
bool isValidInput(char *);

int _tmain(int argc, _TCHAR* argv[])
{
	char s[100];
	int d(0);

	cout << "Please input a hex number (must start with 0x or -0x): ";
	cin >> s;

	if(!isValidInput(s))
		cout << "\nIt's not a valid hex format input." << endl;
	else
		cout << "The dec number is: " << hexToDec(s) << endl;

	cin >> s;
	return 0;
}

bool isValidInput(char * s)
{
	bool isValid;

	if(!strncmp(s, "0x", 2) || !strncmp(s, "0X", 2))		
		i = 2;
	else if(!strncmp(s, "-0x", 3) || !strncmp(s, "-0X", 3))
	{
		i = 3;
		neg = true;
	}
	else
		return false;

	for(i; i < strlen(s); i++)
	{
		if((s[i] >= '0' && s[i] <= '9') || ((s[i] >= 'A') && (s[i] <= 'F')) || (s[i] >= 'a' && s[i] <= 'f'))
			isValid = true;
		else
		{
			return false;
		}
	}
	return isValid;
}

int hexToDec(char * s)
{
	int result(0);
	int len = strlen(s);
	for(int j(0); j < len; j++)
	{
		result += cToI(s[j]) * pow(16, len - 1 - j);
	}
	if(neg)
		result *= -1;
	return result;
}

int cToI(char c)
{
	int n(0);
	switch (c)
	{
	case '0':
		n = 0; break;
	case '1':
		n = 1; break;
	case '2':
		n = 2; break;
	case '3':
		n = 3; break;
	case '4':
		n = 4; break;
	case '5':
		n = 5; break;
	case '6':
		n = 6; break;
	case '7':
		n = 7; break;
	case '8':
		n = 8; break;
	case '9':
		n = 9; break;
	case 'a':
		n = 10; break;
	case 'b':
		n = 11; break;
	case 'c':
		n = 12; break;
	case 'd':
		n = 13; break;
	case 'e':
		n = 14; break;
	case 'f':
		n = 15; break;
	default:
		break;
	}

	return n;
}