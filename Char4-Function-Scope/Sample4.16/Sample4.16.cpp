// Sample4.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int k(4);
const int n(6);
int sum_of_powers(int k, int n), powers(int m, int n);

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "sum of " << k << " powers of integers from 1 to " << n << " = " ;
	cout << sum_of_powers(k, n) << endl;

	int a;
	cin >> a;
	return 0;
}

int sum_of_powers(int k, int n)
{
	int sum(0);
	for(int i(1); i <= n; i++)
	{
		sum += powers(i, k);
	}
	return sum;
}

int powers(int m, int n)
{
	int i, product(1);
	for(i = 1; i <= n; i++)
		product *= m;
	return product;
}
