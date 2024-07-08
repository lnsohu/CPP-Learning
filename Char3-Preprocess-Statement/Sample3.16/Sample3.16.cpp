// Sample3.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"

#define MIN 51
#define MAX 100
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, k, n(0);
	for(i = MIN; i < MAX; i++)
	{
		k = (int)sqrt((double)i);
		for(j = 2; j <= k; j++)
			if(i % j == 0)
				break;
		if(j >= k + 1)
		{
			if(n % 6 == 0)
				cout << endl;
			n++;
			cout << " " << i;
		}
	}

	cin >> i;
	return 0;
}

