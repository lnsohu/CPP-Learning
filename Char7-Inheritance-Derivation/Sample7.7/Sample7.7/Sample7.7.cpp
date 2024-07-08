// Sample7.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		a = 0;
	}
	A(int i)
	{
		a = i;
	}

	void print()
	{
		cout << a << endl;
	}

	int geta()
	{
		return a;
	}

private:
	int a;
};

class B :public A
{
public:
	B()
	{
		b = 0;
	}
	B(int i, int j) :A(i), b(j)
	{}

	void print()
	{
		A::print();
		cout << b << endl;
	}

private:
	int b;
};

void fun(A& d)
{
	cout << d.geta() * 10 << endl;
}

int main()
{
	B bb(9, 5);
	A aa(5);
	aa = bb;
	aa.print();

	A *pa = new A(8);
	B *pb = new B(1, 2);
	pa = pb;

	pa->print();
	fun(bb);

	int i = 0;
	cin >> i;
    return 0;
}

