// Homework4.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool prime(int);
bool goldbach(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int even;
	cout << "Please input an even number that greater than 6: ";
	cin >> even;
	if(even >= 6 && ((even % 2) == 0))
	{
		if(goldbach(even))
			cout << "Yes! Goldbach's conjecture is right!" << endl;
		else
			cout << "No! Goldbach is wrong!" << endl;
	}
	else
	{
		cout << "Input number didn't meet the requirement: an even number that greater than 6." << endl;
	}
	cin >> even;
	return 0;
}

bool goldbach(int even)
{
	for(int i(3); i <= even/2; i += 2)
	{
		if(prime(i))
		{
			int j = even - i;
			if(prime(j))
			{
				cout << even << " = " << i << " + " << j << endl;
				return true;
			}
		}
	}
	return false;
}

bool prime(int n)
{
	if(n == 3 || n == 5 || n == 7)
		return true;
	else
	{
		for(int i(3); i <= (int)sqrt(n); i += 2)
		{
			if(n % i == 0)
				return false;
		}
	}

	return true;
}