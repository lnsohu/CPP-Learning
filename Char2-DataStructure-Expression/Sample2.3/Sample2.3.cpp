// Sample2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	static int b[][3] = {{1,2,3},{4},{5,6}};
	b[0][2] = 7;
	b[1][2] = 8;

	cout << **b << "\t" << **(b+1) << "\t" << *(*(b+1)+2) << "\n";
	cout << b[0][2] + b[1][2] + b[2][2];

	cin >> b[1][1];
	return 0;
}

