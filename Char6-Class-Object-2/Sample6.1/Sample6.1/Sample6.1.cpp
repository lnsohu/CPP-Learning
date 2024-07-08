// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	A(int i)
	{
		a = i;
	}
	int fun(int b)
	{
		return a*c + b;
	}
	int c;
private:
	int a;
};

int _tmain(int argc, _TCHAR* argv[])
{
	A x(8);
	int A::*pc;
	pc = &A::c;
	x.*pc = 3;
	int (A::*pfun)(int);
	pfun = &A::fun;
	A *p = &x;
	cout << (p->*pfun)(5) << endl;

	cin >> x.*pc;
	return 0;
}

