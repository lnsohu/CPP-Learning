// Sample3.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
	cout << "Input x, y: ";
	cin >> x >> y;

	if(x != y)
		if(x > y)
			cout << "x > y" << endl;
		else cout << "x < y\n";
	else 
		cout << "x = y\n";

	cin >> x;
	return 0;
}

