// Sample5.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
	A(char *st);
	~A();
private:
	char string[50];
};

A::A(char *st)
{
	strcpy_s(string, st);
	cout << "Constructor called for " << string << endl;
}

A::~A()
{
	cout << "Destructor called for " << string << endl;
}

void fun()
{
	A FunObject("FunObject");
	static A StaticObject("StaticObject");
	cout << "In fun()." << endl;
}

A GlobalObject("GlobalObject"
	
	);

int _tmain(int argc, _TCHAR* argv[])
{
	A MainObject("MainObject");
	cout << "In main(), before called fun\n";
	fun();
	cout << "In main(), after called fun\n";

	int a;
	cin >> a;
	return 0;
}

