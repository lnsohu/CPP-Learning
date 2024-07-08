// Homework3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A();
	A(int i, int j);
	~A();
	void Set(int i, int j){ a = i; b = j; }
private:
	int a, b;
};

A::A()
{
	a = 0;
	b = 0;
	cout << "Default constructor called.\n";
}

A::A(int i, int j)
{
	a = i;
	b = j;
	cout << "Constructor: a = " << a << ", b = " << b << endl;
}

A::~A()
{
	cout << "Deconstructor called. a = " << a << ", b = " << b << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Staring1...\n";
	A a[3];
	for (int i = 0; i < 3; i++)
		a[i].Set(2 * i + 1, (i + 1) * 2);
	cout << "Ending1...\n";
	cout << "Starting2...\n";
	A b[3] = { A(1, 2), A(3, 4), A(5, 6) };
	cout << "Ending2...\n";

	cin.get();
	return 0;
}

