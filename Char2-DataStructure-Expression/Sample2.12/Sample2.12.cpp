// Sample2.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char x('m'),y('n');
	int n;
	n=x<y;
	cout << n << endl;

	n=x==y-1;
	cout << n << endl;
	n=('y' != 'Y') + (5>3) + (y-x==1);
	cout << n << endl;

	cin >> n;
	return 0;
}

