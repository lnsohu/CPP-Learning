// Sample4.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x(3);
	for(; x > 0; x--)
	{
		int x(5);
		cout << x << "\t";
	}

	cout << endl << x << endl;
	cin >> x;
	return 0;
}

