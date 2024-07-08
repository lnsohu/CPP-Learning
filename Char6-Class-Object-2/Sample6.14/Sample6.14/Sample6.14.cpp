// Sample6.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(int i);
	void print();
	const int & r;

private:
	const int a;
	static const int b;
};

const int A::b = 10;
A::A(int i) :a(i), r(a)
{}

void A::print()
{
	cout << a << ":" << b << ":" << r << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	A a1(100), a2(0);
	a1.print();
	a2.print();

	cin.get();
	return 0;
}

