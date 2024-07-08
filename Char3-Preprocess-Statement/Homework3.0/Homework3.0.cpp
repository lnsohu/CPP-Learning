// Homework3.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// #include "f1.cpp"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// (1)
#define M 1.5
#define A(a) M*a

	int x(5), y(6);
	cout << A(x+y) << endl;

	// (2)
#define MAX(a,b) (a) > (b)? (a) : (b)
	int m(1), n(2), p(0), q;
	q = MAX(m, n+p) * 10;
	cout << q << endl;

	// (3) please refer to Test3
	//int a(5), b;
	//b = f1(a);
	//cout << b << endl;

	// (4)
	int i(0);
	while (++i)
	{
		if(i == 10)
			break;
		if(i % 3 != 1)
			continue;
		cout << i << endl;
	}

	// (5)
	i = 1;
	do
	{
		i++;
		cout << ++i << endl;
		if(i == 7)
			break;
	}
	while (i == 3);

	cout << "OK!\n";

	// (6)
	i = 1;
	int j(2), k(3), a(10);
	if(!i)
		a--;
	else if(j)
		if(k)
			a = 5;
		else a = 6;

		a++;
		cout << a << endl;
		if(i < j)
			if(i != 3)
				if(!k)
					a = 1;
				else if(k)
					a = 5;
		a += 2;
		cout << a << endl;

		// (7)
		int qa[8][8];
		* * qa = 1;
		for(i = 1; i < 8; i++)
		{
			**(qa + i) = 1;
			*(*(qa + i) + i) = 1;

			for(j = 1; j < i; j++)
				*(*(qa + i) + j) = *(*(qa + i - 1) + j - 1) + *(*(qa + i - 1) + j);
		}
		for(i = 0; i < 8; i++)
		{
			for(j = 0; j <= i; j++)
				cout << " " << *(*(qa + i) + j);
			cout << endl;
		}

		// (8)
		x = 5;
		do
		{
			switch (x % 2)
			{
			case 1: x--; 
				break;
			case 2: x++;
				break;
			}
			x--;
			cout << x << endl;
		}
		while(x > 0);

		// (9)
		a = 5; i = 0; j = 0;
		int b(6);
		switch (a)
		{
		case 5: switch(b)
				{
					case 5: i++; break;
					case 6: j++; break;

					default:
					i++;j++;
		
				}
		case 6: i++;
			j++;
			break;
		default: i++; 
			j++;
		}
		cout << i << "," << j << endl;

		// (10)
		char input[] = "SSSWILTECH1\1\11W\1WALLMP1";
		char c;
		for(i = 2; (c = input[i]) != '\0'; i++)
		{
			switch(c)
			{
			case 'a': cout << 'i';
				continue;
			case '1': break;
			case 1: while((c = input[++i]) != '\1' && c != '\0');
			case 9: cout << 'S';
			case 'E':
			case 'L': continue;
			default: cout << c;
				continue;
			}
			cout << ' ';
		}
		cout << endl;

		cin >> x;
		return 0;
}

