// Sample2.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a(3), b(4), c;
	c = a > b? ++a:++b;
	cout << a << "," << b << "," << c << endl;

	c = a-b? a+b : a-3? b:a;
	cout << a << "," << b << "," << c << endl;

	cin >> c;
	return 0;
}

