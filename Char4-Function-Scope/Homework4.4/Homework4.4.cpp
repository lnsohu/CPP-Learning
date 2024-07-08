// Homework4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void reverseString(char *);

int _tmain(int argc, _TCHAR* argv[])
{
	char s[100];
	cout << "Please input a string: ";
	cin >> s;

	reverseString(s);
	cout << s << endl;

	cin >> s;
	return 0;
}

void reverseString(char * s)
{
	int len = strlen(s); 
	//char * r("a");
	//strcpy_s(r, len, s);
	//for(int i(len - 1), j(0); i >= 0; i--, j++)
	//{
	//	*(r + j) = *(s + i);
	//}

	for(int i(0); i < (len/2); i++)
	{
		char exchange('\0');
		exchange = *(s + i);
		*(s + i) = *(s + (len-1) - i);
		*(s + (len-1) - i) = exchange;
	}
}