// Sample4.25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

const double pi(3.14159265);

int _tmain(int argc, _TCHAR* argv[])
{
	double i(30 * pi/180);
	double x = sin(i);
	double y = cos(i);
	double z = tan(i);

	cout << "sin(30) = " << x << endl;
	cout << "cos(30) = " << y << endl;
	cout << "tan(30) = " << z << endl;

	cin >> i;
	return 0;
}

