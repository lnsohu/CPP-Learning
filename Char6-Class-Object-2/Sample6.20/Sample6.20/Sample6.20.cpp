// Sample6.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Rational
{
public:
	Rational(int d, int n)
	{
		den = d;
		num = n;
	}
	operator double();
private:
	int den, num;
};

Rational::operator double()
{
	return double(den) / double(num);
}

int _tmain(int argc, _TCHAR* argv[])
{
	Rational r(5, 8);
	double d = 4.7;
	d += r;
	cout << d << endl;

	cin.get();
	return 0;
}

