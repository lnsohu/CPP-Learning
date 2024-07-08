// Homework3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 3 - (1)
class A
{
public:
	A();
	A(int i, int j);
	void print();
private:
	int a, b;
};

A::A()
{
	a = b = 0;
	cout << "Default constructor called.\n";
}
A::A(int i, int j)
{
	a = i;
	b = j;
	cout << "Constructor called.\n";
}
void A::print()
{
	cout << "a = " << a << ", b = " << b << endl;
}

// 3 - (2)
class B
{
public:
	B(){}
	B(int i, int j);
	void printb();
private:
	int a, b;
};

class A2
{
public:
	A2(){}
	A2(int i, int j);
	void printa();
private:
	B c;
};

A2::A2(int i, int j) :c(i, j)
{}

void A2::printa()
{
	c.printb();
}

B::B(int i, int j)
{
	a = i;
	b = j;
}
void B::printb()
{
	cout << "a = " << a << ", b = " << b << endl;
}

// 3 - (3)
class Count
{
public:
	Count(){ count++; }
	static int HM(){ return count; }
	~Count(){ count--; };

private:
	static int count;
};

int Count::count = 100;

// 3 - (4)
class A4
{
public:
	A4(double t, double r){ Total = t; Rate = r; }
	friend double Count4(A4 &a4)
	{
		a4.Total += a4.Rate * a4.Total;
		return a4.Total;
	}

private:
	double Total, Rate;
};

// 3 - (5)
class Set
{
public:
	Set(){ PC = 0; }
	Set(Set &s);
	void Empty(){ PC = 0; }
	int IsEmpty(){ return PC == 0; }
	int IsMemberOf(int n);
	int Add(int n);
	void Print();
	friend void reverse(Set *m);
private:
	int elems[100];
	int PC;
};

int Set::IsMemberOf(int n)
{
	for (int i = 0; i < PC; i++)
	if (elems[i] == n)
		return 1;
	return 0;
}

int Set::Add(int n)
{
	if (IsMemberOf(n))
		return 1;
	else if (PC >= 100)
		return 0;
	else
	{
		elems[PC++] = n;
		return 1;
	}
}

Set::Set(Set &p)
{
	PC = p.PC;
	for (int i = 0; i < PC; i++)
		elems[i] = p.elems[i];
}

void Set::Print()
{
	cout << "{";
	for (int i = 0; i < PC - 1; i++)
		cout << elems[i] << ",";
	if (PC>0)
		cout << elems[PC - 1];
	cout << "}" << endl;
}

void reverse(Set *m)
{
	int n = m->PC / 2;
	for (int i = 0; i < n; i++)
	{
		int temp;
		temp = m->elems[i];
		m->elems[i] = m->elems[m->PC - i - 1];
		m->elems[m->PC - i - 1] = temp;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	// 3 - (1)
	cout << "3 - (1)" << endl;
	A m, n(4, 8);
	m.print();
	n.print();

	// 3 - (2)
	cout << endl << "3 - (2)" << endl;
	A2 m2(7, 9);
	m2.printa();

	// 3 - (3)
	cout << endl << "3 - (3)" << endl;
	Count c1, c2, c3, c4;
	cout << Count::HM() << endl;

	// 3 - (4)
	cout << endl << "3 - (4)" << endl;
	A4 a1(1000.0, 0.035), a2(768.0, 0.028);
	cout << Count4(a1) << "," << Count4(a2) << endl;

	// 3 - (5)
	cout << endl << "3 - (5)" << endl;
	Set A;
	cout << " A.IsEmpty(): " << A.IsEmpty() << endl;
	A.Print();

	Set B;
	for (int i = 1; i <= 8; i++)
		B.Add(i);
	B.Print();
	cout << "B.IsMemberOf(5): " << B.IsMemberOf(5) << endl;
	B.Empty();	
	for (int j = 11; j < 20; j++)
		B.Add(j);

	Set C(B);
	C.Print();

	reverse(&C);
	C.Print();

	int t;
	cin >> t;
	return 0;
}

