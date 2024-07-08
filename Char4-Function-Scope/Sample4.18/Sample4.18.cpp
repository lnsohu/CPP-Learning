// Sample4.18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 8;
long Fibo(int n);

int _tmain(int argc, _TCHAR* argv[])
{
	long f = Fibo(N);
	cout << f << endl;

	cin >> f;
	return 0;
}

long Fibo(int n)
{
	if(n == 1)
		return 0;
	else if(n == 2) 
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

