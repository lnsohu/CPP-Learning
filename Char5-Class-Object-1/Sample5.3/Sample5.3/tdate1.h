#include <iostream>
using namespace std;

class TDate1
{
public:
	TDate1(int y, int m, int d);
	~TDate1();
	void Print();

private:
	int year, month, day;
};

TDate1::TDate1(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}

TDate1::~TDate1()
{
	cout << "Deconstructor called.\n";
}

void TDate1::Print()
{
	cout << year << "." << month << "." << day << endl;
}