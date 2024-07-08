// Sample3.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define M 10
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num, sum(0);
	cout << "Input number: ";

	for(int i = 0; i < M; i++)
	{
		cin >> num;
		if(num < 0)
			continue;
		sum += num;
	}

	cout << "sum = " << sum << endl;
	cin >> num;
	return 0;
}

