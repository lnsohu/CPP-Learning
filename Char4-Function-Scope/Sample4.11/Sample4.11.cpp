// Sample4.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int a[8] = {1, 3, 5, 7, 9, 11, 13};
void fun(int *pa, int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		cout << i << ": " << *(pa + i) << " *(pa + 7): " << *(pa + 7) << endl;\
		*(pa + 7) += *(pa + i);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int m = 8;
	int *p = a;
	fun(p, m);
	cout << a[7] << endl;

	cin >> m;
	return 0;
}

