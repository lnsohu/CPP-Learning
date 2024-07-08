// Sample2.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	static char t[][3][5] = {"abcd","efgh","ijkl","mnop","qrst","uvwx"};

	cout  << t[1][2][3] << *(t[1][2]+3) << *(*(*(t+1)+2)+3) << *(*(t[1]+2)+3) << endl;
	cout << **t << "\t" << *(*(t+1)+1) << "\t" << t[0][2] << "\t" << **t+1 <<endl;

	cin >> t[1][1][1];
	return 0;
}

