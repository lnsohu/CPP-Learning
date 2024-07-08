// Sample5.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Time{
public:
	Time(int new_hours, int new_minutes)
	{
		hours = new_hours; minutes = new_minutes;
	}
	friend void Time12(Time time);
	friend void Time24(Time time);
private:
	int hours, minutes;
};

void Time12(Time time)
{
	if (time.hours > 12)
	{
		time.hours -= 12;
		cout << time.hours << ":" << time.minutes << " PM" << endl;
	}
	else
		cout << time.hours << ":" << time.minutes << " AM" << endl;
}

void Time24(Time time)
{
	cout << time.hours << ":" << time.minutes << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Time Time1(20, 30), Time2(10, 45);
	Time12(Time1);
	Time24(Time1);
	Time12(Time2);
	Time24(Time2);

	int a;
	cin >> a;
	return 0;
}

