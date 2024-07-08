// Sample4.23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int i(10);
static int reset(), next1(int), last(int), other(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int i = reset();
	for(int j(1); j <= 3; j++)
	{
		cout << i << "," << j << ",";
		cout << next1(i) << ",";
		cout << last(i) << ",";
		cout << other(i + j) << endl;
	}

	cin >> i;
	return 0;
}

static int reset()
{
	return i;
}

static int next1(int j)
{
	j = i++;
	return j;
}

static int last(int j)
{
	static int i(20);
	j = i--;
	return j;
}

static int other(int i)
{
	int j(15);
	return i = j += i;
}

