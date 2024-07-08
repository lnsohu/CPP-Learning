// Sample5.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class M
{
public:
	M(int a){ A = a; B += a; }
	static void f1(M m);
private:
	int A;
	static int B;
};

void M::f1(M m)
{
	cout << "A = " << m.A << endl;
	cout << "B = " << B << endl;
}
int M::B = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	M P(5), Q(10);
	M::f1(P);
	M::f1(Q);

	int a;
	cin >> a;
	return 0;
}

