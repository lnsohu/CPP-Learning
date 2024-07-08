// Sample6.21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "array.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	array <int> a1(10);
	array<double>a2(5);

	cout << "Integer array:" << endl;
	for (int i(0); i < 10; i++)
		a1[i] = i + 1;
	for (int i = 0; i < 10; i++)
		cout << a1[i] << "	";
	cout << endl;

	cout << "Double array:" << endl;
	cout.precision(4);

	for (int i(0); i < 5; i++)
		a2[i] = (double)(i + 1)*3.14;
	for (int i(0); i < 5; i++)
		cout << a2[i] << "	";
	cout << endl;

	cin.get();

	a1[20] = 15;
	a2[20] = 25.5;
	return 0;
}

