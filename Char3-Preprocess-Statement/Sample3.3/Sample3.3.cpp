// Sample3.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define PI 3.14159265
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double r, l, s, v;
	cout << "Input radius: ";

	cin >> r;
	l = 2 * PI * r;
	s = PI * r * r;
	v = 4.0/3.0 * PI * r*r*r;
	cout << "l = " << l << "\n" << "s = " << s << "\n" << "v = " << v << endl;

	cin >> r;
	return 0;
}

