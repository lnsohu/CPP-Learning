// Sample6.17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class B
{
public:
	B(char *s, double n)
	{
		strcpy_s(name, 80, s);
		b = n;
		cout << "Constructor\n";
	}
	B()
	{
		cout << "Default\n";
	}
	~B()
	{
		cout << "Destructor " << name << endl;
	}
	void getb(char *s, double &n)
	{
		strcpy_s(s, 80, name);
		n = b;
	}
private:
	char name[80];
	double b;
};

int _tmain(int argc, _TCHAR* argv[])
{
	B *p;
	double n;
	char s[80];
	p = new B[3];
	p[0] = B("ma", 4.8);
	p[1] = B("wang", 3.6);
	p[2] = B("li", 3.1);

	for (int i = 0; i < 3; i++)
	{
		p[i].getb(s, n);
		cout << s << "," << n << endl;
	}
	delete[] p;
	cin.get();
	return 0;
}

