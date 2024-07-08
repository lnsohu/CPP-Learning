// Sample3.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define ADD(a,b) a + b
using  namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x(5), y(7), s;
	s = ADD(x + 1, y - 2);
	cout << "s = " << s << endl;

	cin >> s;
	return 0;
}

