// Sample2.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

student stu[3] = {
		{"Fan", 80, 82, 87},
		{"Wang", 90, 85, 80},
		{"Li", 83, 78, 70}
	};
int _tmain(int argc, _TCHAR* argv[])
{
	student *p, * find(student *s);
	p = find(stu);
	cout << p->name << ':' << (p->score[0] + p->score[1] + p->score[2])/3 << endl;
	
	int a;
	cin >> a;
	return 0;
}

student * find(student *s)
{
	char name1[20];
	cout << "Input student's name:";
	cin >> name1;

	for(int i = 0; i<3; i++)
	{
		if(strcmp(name1, s[i].name) == 0)
			return s+i;
	}

	return 0;
}



