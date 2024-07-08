// Homework3.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class M, int N>
class Array
{
public:
	M & operator[](int i);
	M getnum(int i)
	{
		return buf[i];
	}
private:
	M buf[N];
};

template <class M,int N>
M & Array<M, N>::operator[](int i)
{
	return buf[i];
}

int _tmain(int argc, _TCHAR* argv[])
{
	Array <double, 10> a;
	for (int i(0); i < 10; i++)
		a[i] = 18.2 + i;
	for (int i = 0; i < 10; i++)
		cout << a.getnum(i) << "	";
	cout << endl;

	cin.get();
	return 0;
}

