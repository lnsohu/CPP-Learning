// Sample2.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,c;
	a = 1, b = 2, c = a + b + 3;
	cout << a << ',' << b << ',' << c << endl;

	c = (a++, a+=b, a+b);
	cout << c << endl;

	cin >> a;
	return 0;
}

