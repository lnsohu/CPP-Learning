// Sample1.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int,int);
int _tmain(int argc, _TCHAR* argv[])
{
	int a,b;
	cout << "Please input 2 int numbers: ";
	cin >> a >> b;
	int c = add(a,b);
	cin >> c;
	return 0;
}

