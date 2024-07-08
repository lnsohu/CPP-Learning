// Sample4.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int m(8);
int add_int(int x, int y = 7, int z = m);

int _tmain(int argc, _TCHAR* argv[])
{
	int a(5), b(15), c(20);
	int s = add_int(a, b);
	cout << s << endl;

	cin >> a;
	return 0;
}

int add_int(int x, int y, int z)
{
	return x + y + z;
}

