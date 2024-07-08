// Sample3.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int sum (0);
	for(int i(1); i <= 10; sum += i++)
		;

	cout << "sum = " << sum << endl;
	cin >> sum;
	return 0;
}

