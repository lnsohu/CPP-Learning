// Sample4.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun(int a = 1, int b = 3, int c = 5)
{
	cout << "a = " << a << "," << " b = " << b << "," << " c = " << c << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	fun();
	fun(7);
	fun(7, 9);
	fun(7, 9, 11);
	cout << "OK!";

	int a;
	cin >> a;
	return 0;
}

