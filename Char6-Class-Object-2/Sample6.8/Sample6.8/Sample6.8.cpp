// Sample6.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 5;

int _tmain(int argc, _TCHAR* argv[])
{
	char *strings[N];
	char str[80];
	cout << "At each prompt, enter a string:\n";

	for (int i = 0; i < N; i++)
	{
		cout << "Enter a string #" << i << ":";
		cin.getline(str, sizeof(str));
		strings[i] = new char[strlen(str) + 1];

		strcpy_s(strings[i], strlen(str)+1, str);
	}

	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "String #" << i << ": " << strings[i] << endl;
	}

	cin.getline(str, sizeof(str));
	return 0;
}

