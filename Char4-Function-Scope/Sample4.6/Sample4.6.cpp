// Sample4.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int &fun(char, int &, int &);
int _tmain(int argc, _TCHAR* argv[])
{
	int tn(0), tc(0);
	cout << "Enter characters: ";
	char ch;
	cin >> ch;

	while(ch != '#')
	{
		fun(ch, tn, tc)++;
		cin >> ch;
	}

	cout << "Nunber characters: " << tn << endl;
	cout << "Other characters: " << tc << endl;
	cin >> ch;
	return 0;
}

int &fun(char cha, int &n, int & c)
{
	if(cha >= '0' && cha <= '9')
		return n;
	else 
		return c;
} 

