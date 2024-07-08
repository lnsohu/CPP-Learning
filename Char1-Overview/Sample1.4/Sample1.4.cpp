// Sample1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int,int);
int _tmain(int argc, _TCHAR* argv[])
{
	int a,b;
	cout << "Please input a and b:";
	cin >> a >> b;
	int c = add(a,b);
	cout << c << endl;
	cin >> c;
	return 0;
}

// Add 2 int numbers
int add(int x, int y)
{
	return x+y;
}

