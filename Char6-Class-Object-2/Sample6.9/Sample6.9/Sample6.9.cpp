// Sample6.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(int i = 0, int j = 0)
	{
		a = i; b = j;
	}
	void print();
private:
	int a, b;
};

void A::print()
{
	cout << a << "," << b << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	A a1(7, 8), a2, a3(5, 7);
	A *b[3] = { &a3, &a2, &a1 };
	for (int i = 0; i < 3; i++)
		b[i]->print();

	cin.get();
	return 0;
}

