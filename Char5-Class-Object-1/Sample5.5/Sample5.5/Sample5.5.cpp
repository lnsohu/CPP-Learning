// Sample5.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tpoint1.h"
TPoint f(TPoint Q);

int _tmain(int argc, _TCHAR* argv[])
{
	TPoint M(20, 35), P(0, 0);
	TPoint N(M);
	P = f(N);
	cout << "P=" << P.Xcoord() << "," << P.Ycoord() << endl;

	int a;
	cin >> a;
	return 0;
}

TPoint f(TPoint Q)
{
	cout << "ok\n";
	int x, y;
	x = Q.Xcoord() + 10;
	y = Q.Ycoord() + 20;
	TPoint R(x, y);
	return R;
}

