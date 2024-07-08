// Sample2.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char *s[] = {"char", "long", "int"};
int _tmain(int argc, _TCHAR* argv[])
{
	s[0] = "double";
	*(s + 1) = "float";

	cout << s[0] << endl;
	cout << *(s + 1) << endl;
	cout << s[2] << endl;
	cout << *(*s + 2) << ',' << *(s[2] + 1) << endl;

	char a;
	cin >> a;
	return 0;
}

