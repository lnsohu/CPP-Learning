// Homework4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// (1)
	cout << "This is a string\n";
	
	// (2)
	int x;
	cin >> x;
	int p = x*x;
	cout << "p = " << p << "\n";

	// (3)
	int i,j;
	i=5;
	cin >> j;
	int k = i+j;
	cout << "i+j=" << k << "\n";

	cin >> x;
	return 0;
}

