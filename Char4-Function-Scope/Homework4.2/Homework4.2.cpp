// Homework4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

static int flag(0);
const int N = 10;
void sort(int []);
void insert(int, int [], int);

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Please input 10 int numbers: " << endl;
	int a[N];
	for(int i(0); i < N; i++)
	{
		cin >> a[i]; 
	}

	sort(a);
	cin >> a[0];
	return 0;
}

void sort(int a[])
{
	int s[N];
	s[0] = a[0];

	for(int i(1); i < N; i++)
	{
		if(a[i] < s[flag])
		{
			flag++;
			s[flag] = a[i];
		}
		else if(s[flag] == a[i])
			continue;
		else
		{
			for(int j(0); j <= flag; j++)
			{
				if(a[i] == s[j])
					break;
				if (a[i] > s[j])
				{
					insert(a[i], s, j);
					break;
				}
			}
		}

	}

	cout << "Sorted results: " << endl;
	for(int i(0); i <= flag; i++)
		cout << s[i] << ' ';
	cout << endl;
}

void insert(int value, int s[], int p)
{
	for(int f(flag); f >= p; f--)
	{
		s[f+1] = s[f];
	}
	s[p] = value;
	flag++;
}
