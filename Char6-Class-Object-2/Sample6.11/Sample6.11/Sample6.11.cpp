// Sample6.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 6;
void print(const int *p, int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int array[N];
	for (int i = 0; i < N; i++)
		cin >> array[i];
	print(array, N);

	cin.get();
	cin.get();
	return 0;
}

void print(const int *p, int n)
{
	cout << "{" << *p; 
	for (int i = 1; i < n; i++)
		cout << "," << *(p + i);
	cout << "}" << endl;
}

