// Sample2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	static int a[5] = {5,4,3,2,1};
	int i,j;
	i = a[0] + a[4];
	j = *(a + 2) + *(a + 4);

	cout << i << endl << j;
	cin >> j;
	return 0;
}

