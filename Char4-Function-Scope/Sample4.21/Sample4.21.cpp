// Sample4.21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void other();

int _tmain(int argc, _TCHAR* argv[])
{
	int a(3);
	register int b(5);
	static int c;
	cout << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << endl;
	other();
	other();

	cin >> a;
	return 0;
}

void other()
{
	int a(5);
	static int b(12);
	a + 10;
	b += 20;
	cout << "a = " << a << ", " << "b = " << b << endl;
}

