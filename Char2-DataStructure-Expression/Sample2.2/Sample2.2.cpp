// Sample2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	static char s1[] = "abcde", s2[5] = {'m','n','p','q','\0'};
	char *ps = s1;
	cout << s1 << " or " << s2;
	cout << "\n";
	cout << s2[1] << s2[2] << s1[3] << s1[4] << endl;
	cout << *ps << *(ps+2) << *(ps+4) << *ps+2;

	cin >> *ps;
	return 0;
}

