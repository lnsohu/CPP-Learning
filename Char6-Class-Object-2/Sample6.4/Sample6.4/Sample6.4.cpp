// Sample6.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		a = b = 0;
	}
	A(int i, int j)
	{
		a = i; b = j;
	}
	void copy(A &aa);
	void print()
	{
		cout << a << "," << b << endl;
	}
private:
	int a, b;
};

void A::copy(A &aa)
{
	if (this == &aa) return;
	*this = aa;
}
int _tmain(int argc, _TCHAR* argv[])
{
	A a1, a2(3, 4);
	a1.copy(a2);
	a1.print();

	int t;
	cin >> t;
	return 0;
}

