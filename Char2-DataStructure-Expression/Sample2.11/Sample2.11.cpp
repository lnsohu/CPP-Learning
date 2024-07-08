// Sample2.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned a(0xab),b(20);
	a&=b;
	a^=a;
	cout << a << "\t" << b << endl;

	int x(-3),y(5);
	x>>y;
	x<<=y;
	x |= y^~y;
	y &= ~x+1;
	cout << x << "\t" << y << endl;

	cin >> a;
	return 0;
}

