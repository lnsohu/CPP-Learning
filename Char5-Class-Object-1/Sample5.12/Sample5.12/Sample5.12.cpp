// Sample5.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point{
public:
	Point(double xx, double yy)
	{
		x = xx; y = yy;
	}
	void Getxy();
	friend double Distance(Point &a, Point &b);
private:
	double x, y;
};

void Point::Getxy()
{
	cout << "(" << x << "," << y << ")" << endl;
}
double Distance(Point &a, Point &b)
{
	double dx = a.x - b.x;
	double dy = a.y - b.y;
	return sqrt(dx*dx + dy*dy);
}

int _tmain(int argc, _TCHAR* argv[])
{
	Point p1(3.0, 4.0), p2(6.0, 8.0);
	p1.Getxy();
	p2.Getxy();
	double d = Distance(p1, p2);
	cout << "Distance is " << d << endl;

	int a;
	cin >> a;
	return 0;
}

