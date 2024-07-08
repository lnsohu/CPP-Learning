// Sample4.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef int array[8];
array a = {1, 3, 5, 7, 9, 11, 13};

void fun(array b, int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		b[7] += b[i];
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int m = 8;
	fun(a, m);
	cout << a[7] << endl;

	cin >> m;
	return 0;
}

