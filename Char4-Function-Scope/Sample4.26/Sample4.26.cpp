// Sample4.26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char s1[] = "abc mnp";
	char *s2 = "hello!";
	char s3[80];

	cout << "Input a word: ";
	cin >> s3;

	cout << "s1: " << strlen(s1) << endl;
	cout << "s2: " << strlen(s2) << endl;
	cout << "s3: " << strlen(s3) << endl;
	cout << strlen("iostream.h");

	cin >> s3;
	return 0;
}

