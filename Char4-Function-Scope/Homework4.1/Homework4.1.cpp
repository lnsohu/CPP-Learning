// Homework4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float average(float f[], int n);
float sum(float f[], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	// (1)
	cout << "Please input 15 float numbers: " << endl;
	float f[15];
	for(int i(0); i < 15; i++)
	{
		cin >> f[i];
	}
	
	cout << "The average value: " << average(f, 15) << endl;
	cout << "The sum: " << sum(f, 15) << endl;

	cin >> f[0];
	return 0;
}

float sum(float f[], int n)
{
	float sum(0);
	for(int i(0); i < n; i++)
		sum += f[i];
	return sum;
}

float average(float f[], int n)
{
	return sum(f, n) / n;
}

