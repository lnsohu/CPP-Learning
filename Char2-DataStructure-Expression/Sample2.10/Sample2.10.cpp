// Sample2.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	a = 7*2+-3%5-4/3;
	float b;
	b = 510+3.2e3-5.6/0.03;
	cout << a << "\t" << b << endl;

	int m(3),n(4);
	a = m++ - --n;
	cout << a << "\t" << m << "\t" << n << endl;

	cin >> a;
	return 0;
}

