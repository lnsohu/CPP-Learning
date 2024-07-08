#include <iostream>
using namespace std;

class TDate
{
public:
	void SetDate(int y, int m, int d);
	int IsLeapYear();
	void Print();
private:
	int year, month, day;
};

void TDate::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

int TDate::IsLeapYear()
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void TDate::Print()
{
	cout << year << "." << month << "." << day << endl;
}