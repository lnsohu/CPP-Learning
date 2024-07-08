// Sample6.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class R
{
public:
	R(int r1, int r2)
	{
		R1=r1;
		R2 = r2;
	}
	void print();
	void print() const;

private:
	int R1, R2;
};

void R::print()
{
	cout << R1 << ":" << R2 << endl;
}
void R::print() const
{
	cout << R1 << ";" << R2 << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	R a(5, 4);
	a.print();
	const R b(20, 52);
	b.print();

	cin.get();
	return 0;
}

