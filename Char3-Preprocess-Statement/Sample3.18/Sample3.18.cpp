// Sample3.18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, num[2][3];
	cout << "Input 6 digiters: ";

	for(i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			cin >> num[i][j];

	for(i = 0; i < 2; i++)
		for(j = 0; j < 3; j++)
			if(num[i][j] < 0)
				goto found;

	cout << "not find!\n";
	goto end;
found: cout << "num[" << i << "][" << j << "]=" << num[i][j] << endl;
end: ;

	cin >> j;
	return 0;
}

