// Homework4.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int cTemp, fTemp;
	cout << "Please input a F temperature: ";
	cin >> fTemp;
	cTemp = (fTemp -32)*5/9;
	cout << "The C temperature is: " << cTemp;

	cin >> fTemp;
	return 0;
}

