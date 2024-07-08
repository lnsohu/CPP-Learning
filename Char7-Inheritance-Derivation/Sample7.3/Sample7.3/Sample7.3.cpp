// Sample7.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(const char *nm)
	{
		strcpy_s(name, 80, nm);
	}
	//private: this is the error from the sample
protected:
	char name[80];
};

class B :public A
{
public:
	B(const char *nm) :A(nm)
	{}
	void PrintName() const;
};

void B::PrintName() const
{
	cout << "name: " << name << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	B b1("wang li");
	b1.PrintName();

	int i;
	cin >> i;
	return 0;
}

