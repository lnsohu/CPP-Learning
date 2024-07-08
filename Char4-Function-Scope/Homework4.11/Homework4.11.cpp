// Homework4.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int func(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int n(2);
	cout << "Result: " << func(n);

	cin >> n;
	return 0;
}

int func(int n)
{
	int temp(0);
	for(int i(1); i <= 10; i++)
	{
		n = pow(n, i);
		temp += n;
	}
	return temp;
}