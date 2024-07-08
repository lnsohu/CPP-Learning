// Homework4.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char r[20];
	char s[][5] = {"abcd", "efgh", "ijkl", "mnop"};

	for(int i(0); i < 4; i++)
	{
		strcat_s(r, (char *)s[i]);
	}

	cout << "The result is: " << r << endl;
	cin >> r[0];
	return 0;
}

