// Homework4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int set1111 = 15;
int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	cout << "Please input an int number: ";
	cin >> a;
	printf ("\n%x\n", a);
	a |= set1111;

	cout << "Right 4 digits are 1, the final number is: ";
	printf ("%x", a);

	cin >> a;
	return 0;
}

