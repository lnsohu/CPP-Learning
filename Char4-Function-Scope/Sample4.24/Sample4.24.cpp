// Sample4.24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int i(1);
extern int reset(), next1(), last(), other(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int i = reset();
	for(int j(1); j <= 3; j++)
	{
		cout << i << "," << j << ",";
		cout << next1() << ",";
		cout << last() << ",";
		cout << other(i + j) << endl;
	}

	cin >> i;
	return 0;
}



