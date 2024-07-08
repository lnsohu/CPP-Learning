// Sample4.27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char s1[8], s3[8];
	char s2[] = "string";
	
	strcpy_s(s1, s2);
	strncpy_s(s3, s1, 3);
	s3[3] = '\0';

	cout << "s1: " << s1 << endl;
	cout << "s3: " << s3 << endl;
	char * s4 = (char *)strcpy_s(s3, (char *)strcpy_s(s1, s2));
	cout << "s4: " << s4 << endl;

	cin >> s1;
	return 0;
}

