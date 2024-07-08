// Sample6.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class DATE
{
public:
	DATE()
	{ 
		month = day = year = 0;
		cout << "Default called.\n";
	}
	DATE(int m, int d, int y)
	{
		month = m;
		day = d;
		year = y;
		cout << "Constructor called\n";
	}
	~DATE()
	{
		cout << "Destructor called.\n";
	}
	void print()
	{
		cout << "Month = " << month << ", Day = " << day << ", Year = " << year << endl;
	}
private:
	int month, day, year;
};

int _tmain(int argc, _TCHAR* argv[])
{
	DATE dates[5] = { DATE(7, 22, 1998), DATE(7, 23, 1998), DATE(11, 20, 2003) };
	dates[3] = DATE(7, 25, 1998);
	dates[4] = DATE(1, 7, 2003);
	for (int i(0); i < 5; i++)
		dates[i].print();

	int t;
	cin >> t;
	return 0;
}

