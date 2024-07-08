// Sample5.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int g = 5;
void f1(), f2();

int _tmain(int argc, _TCHAR* argv[])
{
	g = 10;
	f1();
	f2();

	cout << g << endl;
	cin >> g;
	return 0;
}

void f1()
{
	g = 15;
}
void f2()
{ 
	g = 20;
}

