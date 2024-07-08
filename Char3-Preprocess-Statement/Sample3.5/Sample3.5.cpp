// Sample3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int b(5);
#define b 2
#define f(x) b * (x)
	int y(3);
	cout << f(y + 1) << endl;

#undef b
	cout << f(y + 1) << endl;

#define b 3
	cout << f(y + 1) << endl;
#undef b
	cin >> b;
	return 0;
}

