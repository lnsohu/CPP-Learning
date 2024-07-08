// Sample3.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i = 0; ++i; i<5)
	{
		if(i == 3)
		{
			cout << ++i << endl;
			break;
		}
		cout << ++i << endl;
	}

	char c;
	cin >> c;
	return 0;
}

