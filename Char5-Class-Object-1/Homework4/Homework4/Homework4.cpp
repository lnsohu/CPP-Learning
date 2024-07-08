// Homework4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class HW
{
public:
	// 5 - (1): Overload constructor
	HW(){ cout << "Overload Constructor" << endl; }
	HW(int a, int b)
	{
		A = a;
		B = b;
		cout << "A: " << A << endl;
		cout << "B: " << B << endl;
	}

	//  5 - (2): Member function with default value
	void MemberFunction(int a = 1, int b = 2, int c = 3)
	{
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
		cout << "c: " << c << endl;
	}

	// 5 - (4) Static member function
	static void sf()
	{
		cout << "Static out A: " << A << endl;
	}
private:
	//  5 - (3): Friend function
	friend void Friend();
	static int A;
	int B;
};
void Friend(){ cout << "Call the friend!" << endl; }
int HW::A = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	// 5 - (1): Overload constructor
	cout << "5 - (1): Overload constructor" << endl;
	HW hw;
	HW hw1(4, 5);
	//  5 - (2): Member function with default value
	cout << endl << "5 - (2): Member function with default value" << endl;
	hw.MemberFunction();
	hw.MemberFunction(11, 12);
	hw.MemberFunction(21, 22, 23);

	//  5 - (3): Friend function
	cout << endl << "5 - (3): Friend function" << endl;
	Friend();

	//  5 - (4) Static member function
	cout << endl << "5 - (4) Static member function" << endl;
	HW::sf();

	// 5 - (5): Use different constructor
	cout << endl << "5 - (5): Use different constructor" << endl;
	HW hw2(6, 7);

	int t;
	cin >> t;
	return 0;
}

