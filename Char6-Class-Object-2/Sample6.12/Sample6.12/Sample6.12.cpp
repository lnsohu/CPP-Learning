// Sample6.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class K
{
public:
	K(int i)
	{ 
		k = i;
	}
	int setk() const
	{
		return k;
	}
private:
	int k;
};

int add(const K &g1, const K &g2);

int _tmain(int argc, _TCHAR* argv[])
{
	K k1(8), k2(17);
	int s = add(k1, k2);
	cout << s << endl;

	cin.get();
	return 0;
}

int add(const K&g1, const K&g2)
{
	int sum = g1.setk() + g2.setk();
	return sum;
}

