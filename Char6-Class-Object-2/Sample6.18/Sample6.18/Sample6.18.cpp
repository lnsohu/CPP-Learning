// Sample6.18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun()
{
	int *p;
	if (p = new int)
	{
		*p = 5;
		cout << *p << endl;
		delete p;
	}
	else
		cout << "Heap error!\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
	fun();
	int *pa;
	pa = new int[5];
	if (!pa)
	{
		cout << "Heap error!\n";
		exit(1);
	}
	for (int i = 0; i < 5; i++)
		pa[i] = i + 1;
	for (int i = 0; i < 5; i++)
		cout << pa[i] << " ";
	cout << endl;
	delete[] pa;

	cin.get();
	return 0;
}

