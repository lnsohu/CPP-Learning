// Homework3.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "f1.h"
#include <iostream>
using namespace std;
//extern int f1(int);
int _tmain(int argc, _TCHAR* argv[])
{
	int a(5), b;
	b = f1(a);
	cout << b << endl;

	cin >> a;
	return 0;
}

