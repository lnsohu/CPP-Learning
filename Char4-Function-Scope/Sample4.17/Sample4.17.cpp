// Sample4.17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long int fac(int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "Input a positive integer: ";
	cin >> n;
	long fa = fac(n);
	cout << n << " != " << fa << endl;

	cin >> n;
	return 0;
}

long int fac(int n)
{
	long int p;
	if(n == 0)
		p = 1;
	else
		p = n * fac(n - 1);

	return p;
}

