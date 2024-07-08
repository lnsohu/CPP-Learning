// Sample2.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[3] = {1,2,3};
	int *pa[3];

	pa[0] = &a[0];
	pa[1] = &a[1];
	*(pa + 2) = a + 2;

	cout << *pa[0] << ',' << **(pa + 1) << ',' << *pa[2] << endl;
	cin >> a[1];
	return 0;
}

