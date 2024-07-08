// Homework3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class B
{
	int x, y;
public:
	B();
	B(int i);
	B(int i, int j);
	~B();
	void print();
};

B::B()
{
	x = y = 0;
	cout << "Default constructor called.\n";
}
B::B(int i)
{
	x = i;
	y = 0;
	cout << "Constructor1 called.\n";
}
B::B(int i, int j)
{
	x = i;
	y = j;
	cout << "Constructor2 called.\n";
}
B::~B()
{
	cout << "Deconstructor called.\n";
}
void B::print()
{
	cout << "x = " << x << ", y = " << y << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	B *ptr;
	ptr = new B[3];
	ptr[0] = B();
	ptr[1] = B(5);
	ptr[2] = B(2, 3);

	for (int i = 0; i < 3; i++)
		ptr[i].print();
	delete[] ptr;

	cin.get();
	return 0;
}

