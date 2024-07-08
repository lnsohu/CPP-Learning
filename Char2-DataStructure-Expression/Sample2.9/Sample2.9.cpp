// Sample2.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a(10);
	int &ra = a;
	cout << "a=" << a << ',' << "ra=" << ra << endl;

	a += 5;
	cout << "a=" << a << ',' << "ra=" << ra << endl;

	ra += 5;
	cout << "a=" << a << ',' << "ra=" << ra << endl;

	cout << "&a=" << &a << ',' << "&ra=" << &ra << endl;

	int b(-10);
	ra = b;
	cout << "a=" << a << ',' << "b=" << b << ',' << "ra=" << ra << endl;
	cout << "&a=" << &a << ',' << "&b=" << &b << ',' << "&ra=" << &ra << endl;

	cin >> a;
	return 0;
}

