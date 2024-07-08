// Sample4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun1(), fun2(), fun3();

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "It's in main." << endl;
	fun2();
	cout << "It's back in main." << endl;

	int a;
	cin >> a;
	return 0;
}

void fun1()
{
	cout << "It's in fun1." << endl;
	fun3();
	cout << "It's back in fun1." << endl;
}

void fun2()
{
	cout << "It's in fun2." << endl;
	fun1();
	cout << "It's back in fun2." << endl;
}

void fun3()
{
	cout << "It's in fun3." << endl;
}

