// Homework4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	float b;
	cout << "Please input an int number:";
	cin >> a;
	cout << "Please input a float number:";
	cin >> b;

	if (a > b)
		cout << "The max number is: " << a;
	else
		cout << "The max number is: " << b;

	cin >> a;
	return 0;
}

