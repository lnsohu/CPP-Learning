// Sample6.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class M
{
public:
	M()
	{
		a = b = 0;
	}

	M(int i, int j)
	{
		a = i; b = j;
	}
	void print()
	{
		cout << a << "," << b << '\t';
	}
private:
	int a, b;
};

int _tmain(int argc, _TCHAR* argv[])
{
	M m[2][4];
	int x = 10, y = 10;
	for (int i = 0; i < 2; i++)
	for (int j = 0; j < 4; j++)
		m[i][j] = M(x += 2, y += 10);

	M(*pm)[4](m);
	for (int i = 0; i < 2; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
			(*(*(pm + i) + j)).print();
	}

	cin >> x;
	return 0;
}

