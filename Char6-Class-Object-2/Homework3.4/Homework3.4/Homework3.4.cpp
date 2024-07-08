// Homework3.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(int i = 0){ m = i; cout << "constructor called." << m << "\n";}
	void Set(int i){ m = i; }
	void Print() const { cout << m << endl; }
	~A(){ cout << "deconstructor called." << m << "\n"; }
private:
	int m;
};

void fun(const A& c)
{
	c.Print();
}

int _tmain(int argc, _TCHAR* argv[])
{
	fun(5);
	cin.get();

	return 0;
}

