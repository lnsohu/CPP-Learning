// Homework4.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct student
{
	char name[50];
	float score[4];
};
float sumScore(float[]);
void averageScore(student[]);

int _tmain(int argc, _TCHAR* argv[])
{
	student std[5];
	float high(0), current(0);
	int highIndex(0);
	for(int i(0); i < 5; i++)
	{
		cout << "\nPlease input this student's name: ";
		cin >> std[i].name;

		cout << "Please input this student's scores (from score1 to score4): ";
		for(int j(0); j < 4; j++)
			cin >> std[i].score[j];

		current = sumScore(std[i].score);
		cout << "The total score of this student: " << current;
		if(high < current)
		{
			high = current;
			highIndex = i;
		}
	}

	averageScore(std);
	cout << "\nHighest score student is: " << std[highIndex].name << "\tTotal score: " << high;

	cin >> current;
	return 0;
}

float sumScore(float score[])
{
	float sum(0);
	for(int i(0); i < 4; i++)
	{
		sum += score[i];
	}
	return sum;
}

void averageScore(student std[])
{
	for(int i(0); i < 4; i++)
	{
		float as(0);
		for(int j(0); j < 5; j++)
		{
			as += std[j].score[i];
		}
		as /= 5;
		cout << "\nCourse " << i << " average score: " << as;
	}
}