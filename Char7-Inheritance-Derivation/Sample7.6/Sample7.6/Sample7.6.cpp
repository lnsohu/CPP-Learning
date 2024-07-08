// Sample7.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A() { a = 0; }
	A(int i) { a = i; }

	void print()
	{
		cout << a << ",";
	}

private:
	int a;
};

class B :public A
{
public:
	B() { b1 = b2 = 0; }
	B(int i) { b1 = i; b2 = 0; }
	B(int i, int j, int k) :A(i), b1(j), b2(k) {}

	void print()
	{
		A::print(); cout << b1 << "," << b2 << endl;
	}

private:
	int b1, b2;
};

int main()
{
	B d1;
	B d2(5);
	B d3(4, 5, 6);

	d1.print();
	d2.print();
	d3.print();

	int i;
	cin >> i;
    return 0;
}

