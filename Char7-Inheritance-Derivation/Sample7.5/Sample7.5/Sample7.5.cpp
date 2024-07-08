// Sample7.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class M
{
public:
	M()
	{
		m1 = m2 = 0;
	}
	M(int i, int j)
	{
		m1 = i; m2 = j;
	}
	void print()
	{
		cout << m1 << "," << m2 << ",";
	}
	~M()
	{
		cout << m1 << "," << m2 << ",";
	}

private:
	int m1, m2;
};

class N:public M
{
public:
	N() { n = 0; }
	N(int i, int j, int k);
	void print()
	{
		M::print(); cout << n << endl;
	}
	~N()
	{
		cout << "N's destructor called.\n";
	}
private:
	int n;
};

N::N(int i, int j, int k) :M(i, j), n(k) {}

int main()
{
	N n1(5, 6, 7), n2(-2, -3, -4);
	n1.print();
	n2.print();

	int i;
	cin >> i;
    return 0;
}

