// Sample7.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	void f(int i){ cout << i << endl; }
	void g(){ cout << "g\n"; }
};

class B : A
{
public:
	void h(){ cout << "h\n"; }
	A::f;
};

int _tmain(int argc, _TCHAR* argv[])
{
	B d1;
	d1.f(6);
	//	d1.g();
	d1.h();

	int i;
	cin >> i;
	return 0;
}

