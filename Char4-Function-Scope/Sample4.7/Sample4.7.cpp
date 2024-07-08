// Sample4.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add_int(int x, int y)
{
	return x + y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x(4), y(6);
	int z = add_int(++x, x + y);
	cout << z << endl;

	cin >> x;
	return 0;
}

