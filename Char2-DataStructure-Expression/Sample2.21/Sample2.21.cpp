// Sample2.21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	union{
		int a[3];
		char s[12];
	}u;

	u.a[0] = 0x20494542;
	u.a[1] = 0x474e494a;
	u.a[2] = 0x00000a21;

	cout << u.s;
	cout << sizeof(u) << endl;

	cin >> u.a[0];
	return 0;
}

