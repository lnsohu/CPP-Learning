// Sample3.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i(1), sum(0);
	while(i <= 10)
	{
		sum += i;
		i++;
	}

	cout << "sum = " << sum << endl;
	cin >> i;
	return 0;
}

