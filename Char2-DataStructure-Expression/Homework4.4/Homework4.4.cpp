// Homework4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float km, mile;
	cout << "Please input KM:";
	cin >> km;
	mile = km / 1.60934;
	cout << "It's " << mile << " mile(s)";

	cin >> km;
	return 0;
}

