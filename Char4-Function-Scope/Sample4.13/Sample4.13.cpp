// Sample4.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

inline int power_int(int x)
{
	return x * x;
}

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i = 1; i <= 10; i++)
	{
		int p = power_int(i);
		cout << i << " * " << i << " = " << p << endl;
	}

	int a;
	cin >> a;
	return 0;
}

