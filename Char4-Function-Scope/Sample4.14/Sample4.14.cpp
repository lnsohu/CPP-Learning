// Sample4.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int, int);
double add(double, double);

int _tmain(int argc, _TCHAR* argv[])
{
	cout << add(5, 10) << endl;
	cout << add(5.0, 10.5) << endl;

	int a;
	cin >> a;
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

double add(double a, double b)
{
	return a + b;
}

