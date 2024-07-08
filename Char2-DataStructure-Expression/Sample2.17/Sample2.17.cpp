// Sample2.17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a(5), b;
	char c('k');
	float d = 99.67; //1

	b = c;
	cout << b << endl;

	c = d;               //2
	cout << c << endl;

	a = d - 1;            // 3
	cout  << (char)a << endl;

	cin >> a;
	return 0;
}

