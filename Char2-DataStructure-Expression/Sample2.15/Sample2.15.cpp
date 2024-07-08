// Sample2.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x(1), y(3), z(5);
	x += y *= z -= 2;
	cout << x << ',' << y << ',' << z << endl;

	x *= y /= z -= x;
	cout << x << ',' << y << ',' << z << endl;

	x = y = z = 2;
	z = (x*=2) + (y+=4) +2;
	cout << z << endl;

	cin >> x;
	return 0;
}

