// Sample4.30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T max1(T a, T b)
{
	return a > b? a: b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n1 = 8, n2 = 9;
	double m1 = 3.14, m2 = 3.15;
	char c1 = 'm', c2 = 'n';

	cout << "max(n1, n2) = " << max1(n1, n2) << endl;
	cout << "max(m1, m2) = " << max1(m1, m2) << endl;
	cout << "max(c1, c2) = " << max1(c1, c2) << endl;
	
	cin >> n1;
}

