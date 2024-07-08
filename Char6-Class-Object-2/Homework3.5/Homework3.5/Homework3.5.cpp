// Homework3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class complex
{
public:
	complex();
	complex(double real);
	complex(double real, double imag);
	void print();
	void set(double r, double i);
private:
	double real, imag;
};

complex::complex()
{
	set(0.0, 0.0);
	cout << "Default constructor called.\n";
}
complex::complex(double real)
{
	set(real, 0.0);
	cout << "Constructor: real = " << real << ", imag = " << imag << endl;
}
complex::complex(double real, double imag)
{
	set(real, imag);
	cout << "Constructor: real = " << real << ", imag = " << imag << endl;
}
void complex::print()
{
if(imag<0)
	cout << real << imag << "i" << endl;
else
{
	cout << real << "+" << imag << "i" << endl;
}
}
void complex::set(double r, double i)
{
	real = r;
	imag = i;
}

int _tmain(int argc, _TCHAR* argv[])
{
	complex c1;
	complex c2(6.8);
	complex c3(5.6, 7.9);

	c1.print();
	c2.print();
	c3.print();

	c1 = complex(1.2, 3.4);
	c2 = 5;
	c3 = complex();

	c1.print();
	c2.print();
	c3.print();

	cin.get();
	return 0;
}

