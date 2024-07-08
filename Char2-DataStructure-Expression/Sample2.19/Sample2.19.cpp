// Sample2.19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef struct {
		char *name;
		long su_no;
		double math,english;
	}student;

int _tmain(int argc, _TCHAR* argv[])
{
	static student s1 = {"Zhang", 3001, 85, 92}, s2 = {"Ma", 3005, 80, 85};
	double a1 = (s1.math + s1.english)/2;
	double a2 = (s2.math + s2.english)/2;
	
	cout << s1.name << '\t' << a1 << endl;
	cout << s2.name << '\t' << a2 << endl;

	cin >> s1.su_no;
	return 0;
}

