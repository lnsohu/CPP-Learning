// Sample6.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "The number of command line arguments is " << argc << endl;
	wcout << "The program name is " << argv[0] << endl; // use wcout because the argv is _TCHAR

	if (argc > 1)
	{
		cout << "The command line arguments:\n";
		for (int i = 1; i < argc; i++)
			wcout << argv[i] << endl;
	}
	return 0;
}

