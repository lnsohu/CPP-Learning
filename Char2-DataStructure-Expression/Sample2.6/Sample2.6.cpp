// Sample2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int a[2][3] = {1,2,3,4,5,6};
int _tmain(int argc, _TCHAR* argv[])
{
	int (*pa)[3];
	pa = a + 1;
	cout << pa[-1][0] << ',' << pa[0][0] << ',' << *(*pa+2) << endl;

	cin >> a[1][1];
	return 0;
}

