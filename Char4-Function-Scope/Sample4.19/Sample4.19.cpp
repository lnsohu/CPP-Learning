// Sample4.19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a(5), b(7), c(10);
	cout << a << "," << b << "," << c << endl;
	{
		int b(8);
		float c(8.8);
		cout << a << "," << b << "," << c << endl;
		a = b;
		{
			int c;
			c = b;
			cout << a << "," << b << "," << c << endl;
		}
		cout << a << "," << b << "," << c << endl;
	}
	cout << a << "," << b << "," << c << endl;

	cin >> a;
	return 0;
}

