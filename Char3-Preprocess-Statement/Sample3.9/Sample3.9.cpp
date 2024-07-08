// Sample3.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	cin >> str;	

	int nother(0), ndigit[10];
	for(int i = 0; i < 10; i++)
		ndigit[i] = 0;

	int j = 0;
	while(str[j] != '$')
	{
		//cin >> c;
		cout << "Current c is: " << str[j] << endl;
		switch(str[j])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9': ++ndigit[str[j] - '0'];
				cout << "str[j]: " << str[j] << " '0' is: " << '0' << " str[j] - '0':" << (str[j] - '0') << endl;
				break;
			default: ++nother;
		}
		j++;
	}
//	cin >> c;
	cout << "digiter = ";
	for(int i = 0; i < 10; i++)
		cout << ndigit[i] << ' ';
	
	cout << "\nother = " << nother << endl;

	cin >> str;
	return 0;
}

