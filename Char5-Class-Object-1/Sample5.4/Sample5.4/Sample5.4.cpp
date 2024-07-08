// Sample5.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tpoint1.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TPoint P1(5, 7);
	TPoint P2(P1);
	cout << "P2=" << P2.Xcoord() << "," << P2.Ycoord() << endl;
	
	int a;
	cin >> a;
	return 0;
}

