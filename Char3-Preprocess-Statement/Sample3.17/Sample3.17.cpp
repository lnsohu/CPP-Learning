// Sample3.17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 11- i; j++)
		{
			cout << " ";
		}
		for(int j = 1; j <= i; j++)
		{
			if(i == 10)
			{
				cout << i << " ";
			}
			else 
				cout << i << "  ";
		}
		cout << endl;
	}
		int c;
		cin >> c;
	return 0;
}

