// Sample4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap3(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "x = " << x << "," << "y = " << y << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a(5), b(9);
	swap3(a, b);
	cout << "a = " << a << "," << "b = " << b << endl;

	cin >> a;
	return 0;
}

