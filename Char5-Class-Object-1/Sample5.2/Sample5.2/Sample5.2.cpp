// Sample5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tpoint.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TPoint p1, p2;
	p1.SetPoint(3, 5);
	p2.SetPoint(8, 10);
	p1.Move(2, 1);
	p2.Move(1, -2);

	cout << "x1 = " << p1.Xcoord() << ", y1 = " << p1.Ycoord() << endl;
	cout << "x2 = " << p2.Xcoord() << ", y2 = " << p2.Ycoord() << endl;

	int a;
	cin >> a;
	return 0;
}

