// Sample6.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class AA
{
public:
	AA(int i, int j)
	{
		A = i; B = j;
		cout << "Constructor.\n";
	}
	~AA()
	{
		cout << "Destructor.\n";
	}
	void print();

private:
	int A, B;
};

void AA::print()
{
	cout << A << "," << B << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	AA *a1, *a2;
	a1 = new AA(1, 2);
	a2 = new AA(5, 6);
	a1->print();
	a2->print();
	delete a1;
	delete a2;

	cin.get();
	return 0;
}

