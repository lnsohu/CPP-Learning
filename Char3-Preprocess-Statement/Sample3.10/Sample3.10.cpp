// Sample3.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i(1), j(0), m(1), n(2);
	switch(i++)
	{
		
	case 1: m++; n++;
	case 2:switch(++j)
		   {
	case 1: m++;
	case 2: n++;
		   }
	case 3: m++; n++;
		break;
	case 4: m++; n++;
	}

	cout << m << ',' << n << endl;
	cin >> i;
	return 0;
}

