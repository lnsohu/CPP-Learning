// Sample5.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tdate1.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TDate1 today(1998, 4, 9), tomorrow(1998, 4, 10);
	cout << "today is ";
	today.Print();

	cout << "tomorrow is ";
	tomorrow.Print();

	int a;
	cin >> a;
	return 0;
}

