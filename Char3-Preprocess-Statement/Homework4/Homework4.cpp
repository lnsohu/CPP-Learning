// Homework4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// (1)
	int odd(1), sum(0);
	for(odd = 1; odd < 100; odd+=2)
	{
		sum += odd;
		cout << "current odd: " << odd << " current sum: " << sum << endl;
	}
	cout << "All odd sum within 100 is: " << sum << endl;

	// (2)
	int i(2);
	sum = 0;
	while(1)
	{
		sum = 13 * i;
		i++;
		if(sum > 100)
			break;
		else
		{
			cout << "sum: " << sum << " i: " << i << endl;
		}	
	}
	
	// (3)
	int x, y;
	cout << "Please input 2 int numbers (greater than 0): " << endl;
	cin >> x; 
	cin >> y;

	int big, min, cDivisor, cMultipl, factor;
	if(x > y)
	{
		big = x;
		min = y;
	}
	else
	{
		big = y;
		min = x;
	}

	factor = min;
	for(i = 1; i <= big; i++)
	{
		if((factor % i) == 0)
		{
			factor = min / i;
		}
		else 
			continue;

		if(big % factor == 0)
		{
			cout << "The biggest common divisor is: " << factor << endl;
			break;
		}
	}

	factor = big;
	for(i = 1; i <= min; i++)
	{
		factor = big * i;
		if(factor % min == 0)
		{	
			cout << "The min common multiple is: " << factor << endl;
			break;
		}
	}

	// (4)
	int numerrator[15], denominator[15];
	numerrator[0] = 2; numerrator[1] = 3;
	denominator[0] = 1; denominator[1] = 2;
	double fractionSum = (double)numerrator[0]/(double)denominator[0] + (double)numerrator[1]/(double)denominator[1];
	cout << " current sum: " << fractionSum << endl; 
	for(i = 2; i < 15; i++)
	{
		numerrator[i] = numerrator[i-1] + numerrator[i-2];
		denominator[i] = denominator[i-1] + denominator[i-2];
		fractionSum += (double)numerrator[i]/(double)denominator[i];
		cout << numerrator[i] << "/" << denominator[i] << " current sum: " << fractionSum << endl; 
	}

	// (5)	
	sum = 0;
	for(i = 1; i <= 10; i++)
	{
		cout << "\nCurrent i: " << i << endl;
		int factorial(1);
		for(int j = 1; j <= i; j++)
		{
			factorial *= j;
			cout << "j: " << j << " factorial: " << factorial << endl;
		}
		sum += factorial;
		cout << "\nSum result is: " << sum << endl; 
	}

	// (6)
	for(i = 1; i < 1000; i++)
	{
		int square = i*i;
		if(square > 1000)
			break;
		cout << square << "\t";
		if(i % 8 == 0)
			cout << endl;
	}

	// (7)
	int n1, n2, n3, n4, rank[4];
	cout << "\n\nPlease input 4 numbers: ";
	cin >> n1; cin >> n2; cin >> n3; cin >> n4;
	
	if(n1 > n2)
	{
		rank[0] = n1;
		rank[1] = n2;
	}
	else
	{
		rank[0] = n2;
		rank[1] = n1;
	}
	if(n3 >= rank[0])
	{
		rank[2] = rank[1];
		rank[1] = rank[0];
		rank[0] = n3;
	}
	else if(n3 <= rank[1])
	{
		rank[2] = n3;
	}
	else
	{
		rank[2] = rank[1];
		rank[1] = n3;
	}

	if(n4 >= rank[0])
	{
		rank[3] = rank[2];
		rank[2] = rank[1];
		rank[1] = rank[0];
		rank[0] = n4;
	}
	else if(n4 >= rank[1])
	{
		rank[3] = rank[2];
		rank[2] = rank[1];
		rank[1] = n4;
	}
	else if(n4 >= rank[2])
	{
		rank[3] = rank[2];
		rank[2] = n4;
	}
	else
		rank[3] = n4;

	for(i=0; i<4; i++)
	{
		cout << rank[i] << " ";
	}

	// (8)
	cout << "\nPlease input the x value: ";
	cin >> x;
	if(x < 1)
		y = x;
	else if(x >= 10)
		y = x - 5;
	else
		y = x + 5;
	cout << "Result y is: " << y << endl;

	// (9)
	float a, b, c, judger;
	cout << "Please input a b c: ";
	cin >> a; cin >> b; cin >> c;

	judger = b*b - 4*a*c;
	if(a == 0)
		cout << "It's not quadratic." << endl;
	else if(judger == 0)
		cout << "There are 2 roots, they are same" << endl;
	else if(judger > 0)
		cout << "There are 2 roots" << endl;
	else
		cout << "There are 2 Conjugate complex root" << endl;

	// (10)
	cout << endl;
	for(i=0; i < 9; i++)
	{
		if(i < 5)
		{
			for(int j = 0; j < 9; j++)
			{
				if(j < (4-i))
					cout << "\t";
				else if(j > 4+i)
					break;
				else
					cout << "*\t";				
			}
		}
		else
		{
			for(int j = 0; j < 9; j++)
			{
				if(j < (i - 4))
					cout << "\t";
				else if(j > (8 - i + 4))
					break;
				else
					cout << "*\t";				
			}
		}
	cout << endl;
	}
	cin >> odd;
	return 0;
}

