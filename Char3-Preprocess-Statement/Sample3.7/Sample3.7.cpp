// Sample3.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	a = b = 5;
	if(a == 1)
		if(b == 5)
		{
			a += b;
			cout << a << endl;
		}
		else 
		{
			a -= b;
			cout << a << endl;
		}

	cout << a + b << endl;
	cin >> a;
		
	return 0;
}

