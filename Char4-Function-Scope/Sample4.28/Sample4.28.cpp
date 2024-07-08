// Sample4.28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char s1[30] = "first";
	char s2[20] = "second";
	char s3[10] = "third";
	char s4[30];

	strcpy_s(s4, s1);
	strcat_s(s4, s2);
	strcat_s(s4, s3);

	cout << "s4: " << s4 << endl;
	cout << strcat_s(s1, (char *)strncat_s(s2, s3, 3)) << endl;

	cin >> s1;
	return 0;
}

