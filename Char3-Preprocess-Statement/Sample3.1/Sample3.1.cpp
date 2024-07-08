// Sample3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define A 10
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
#if A > 0
	cout << "a > 0" << endl;
#elif A < 0
	cout << "a < 0" << endl;
#else
	cout << "a = 0" << endl;
#endif;

	int a;
	cin >> a;
	return 0;
}

