// Homework4.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int dis(int, int);
float dis(float, float);

int _tmain(int argc, _TCHAR* argv[])
{
	int i1, i2;
	float f1, f2;
	
	cout << "Please input 2 int: ";
	cin >> i1; cin >> i2;

	cout << "\nPlease input 2 float: ";
	cin >> f1; cin >> f2;

	cout << "The distance of 2 int: " << dis(i1, i2) << endl;
	cout << "The distance of 2 float: " << dis(f1, f2) << endl;

	cin >> i1;
	return 0;
}

int dis(int i1, int i2)
{
	return i2 - i1;
}

float dis(float f1, float f2)
{
	return f2 - f1;
}