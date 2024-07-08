// Homework4.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, small;
	cout << "Please inpput an int number:";
	cin >> a;
	cout << "Please input another int number:";
	cin >> b;

	small = a < b? a : b;
	cout << "The min number is: " << small << endl;
	cin >> small;
	return 0;
}

