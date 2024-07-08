// Sample2.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x,y,z;
	x=y=z=1;

	--x&&++y&&++z;
	cout << x << '\t' << y << '\t' << z << '\n';

	++x&&++y&&++z;
	cout << x << '\t' << y << '\t' << z << '\n';

	++x&&y--||++z;
	cout << x << '\t' << y << '\t' << z << '\n';

	cin >> x;
	return 0;
}

