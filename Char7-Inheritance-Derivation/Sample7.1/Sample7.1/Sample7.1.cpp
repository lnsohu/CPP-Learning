// Sample7.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	void f1();
protected:
	int j1;
private:
	int i1;
};

class B :public A
{
public:
	void f2();
protected:
	int j2;
private:
	int i2;
};

class C : public B
{
public:
	void f3();
};

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	cin >> i;
	return 0;
}

