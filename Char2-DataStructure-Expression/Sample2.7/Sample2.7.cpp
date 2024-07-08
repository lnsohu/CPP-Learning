// Sample2.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char *p, s1[10], s2[10];
	int i;
	p = "teacher";
	for (i = 0; i < 7; i++)
		s1[i] = *p+++1;
	
	s1[i] = '\0';
	cout << s1 << endl;
	
	for(i=0; i<7; i++)
		s2[i] = *(s1 + i) - 1;
	s2[i] = '\0';
	cout << s2 << endl;

	cin >> i;
	return 0;
}

