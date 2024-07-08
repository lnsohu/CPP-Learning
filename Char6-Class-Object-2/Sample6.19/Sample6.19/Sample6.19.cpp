// Sample6.19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		m = 0;
	}
	A(double i)
	{
		m = i;
	}
	void print()
	{
		cout << m << endl;
	}

private:
	double m;
};

int _tmain(int argc, _TCHAR* argv[])
{
	A a(5);
	a = 10;
	a.print();

	cin.get();
	return 0;
}

