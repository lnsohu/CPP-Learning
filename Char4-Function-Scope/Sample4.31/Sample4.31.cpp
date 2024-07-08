// Sample4.31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>
using namespace std;

template <class stype> void bubble(stype * item, int count);

int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "HUTREADHGKLP";
	bubble(str, (int)strlen(str));
	cout << "The sorted string is " << str << endl;

	int nums1[] = {4, 7, 2, 9, 3, 7, 6, 1};
	bubble(nums1, 8);
	cout << "The sorted numbers are: ";
	for(int i(0); i < 8; i++)
	{
		cout << nums1[i] << " ";
	}
	cout << endl;

	cin >> str;
	return 0;
}

template <class stype>
void bubble(stype * item, int count)
{
	register int i, j;
	stype t;
	for(i = 1; i < count; i++)
		for(j = count - 1; j >= i; j--)
			if(item[j - 1] > item[j])
			{
				t = item[j - 1];
				item[j - 1] = item[j];
				item[j] = t;
			}
}

