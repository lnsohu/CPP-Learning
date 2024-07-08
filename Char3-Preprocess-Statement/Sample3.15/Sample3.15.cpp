// Sample3.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i(1), a(0);
	for(; i < 5; i++)
	{
		do
		{
			i++;
			a++;
		}
		while(i < 3);
		i++;
	}

	cout << a << "," << i << endl;
	cin >> i;
	return 0;
}

