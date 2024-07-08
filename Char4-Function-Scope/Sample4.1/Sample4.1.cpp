// Sample4.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double sum_double(double x, double y)
{
	return x + y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	double a, b;
	cout << "Input double a and b: ";
	cin >> a >> b;
	double sum = sum_double(a, b);
	cout << "sum = " << sum << endl;

	cin >> a;
	return 0;
}

