// Sample4.29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int result, n;
	char s1[80], s2[80];
	cout << "Input string #1: ";
	cin >> s1;

	cout << "Input string #2: ";
	cin >> s2;
	cout << "Input a number: ";
	cin >> n;

	result = strncmp(s1, s2, n);
	if(result == 0)
		cout << s1 << " is equal to " << s2 << endl;
	else if(result < 0)
		cout << s1 << " is less than " << s2 << endl;
	else
		cout << s1 << " is greater than " << s2 << endl;

	cin >> s1;
	return 0;
}

