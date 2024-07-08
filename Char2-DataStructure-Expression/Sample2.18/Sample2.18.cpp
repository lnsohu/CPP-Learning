// Sample2.18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a(7), *pi;
	double b(5.6321), *pd;
	void *pv;

	pi = &a;
	pv = &b;
	cout << *pi << endl;
	pd = (double *)pv;
	cout << *pd << endl;

	cin >> a;
	return 0;
}

