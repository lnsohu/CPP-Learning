// Homework4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class String
{
public:
	String(){ Length = 0; Buffer = 0; }
	String(const char *str);
	void Setc(int index, char newchar);
	char Getc(int index) const;
	int Getlength() const { return Length; }

	void Print() const
	{
		if (Buffer == 0)
			cout << "empty.\n";
		else
		{
			cout << Buffer << endl;
		}
	}
	void Append(const char *Tail);
	~String(){ delete[] Buffer; }

private:
	int Length;
	char * Buffer;
};

String::String(const char *str)
{
	Length = strlen(str);
	Buffer = new char[Length + 1];
	strcpy_s(Buffer, Length + 1, str);
}

void String::Setc(int index, char newchar)
{
	if (index > 0 && index <= Length)
		Buffer[index - 1] = newchar;
}

char String::Getc(int index) const
{
	if (index > 0 && index <= Length)
		return Buffer[index - 1];
	else
		return 0;
}

void String::Append(const char *Tail)
{
	char *tmp;
	Length += strlen(Tail);
	tmp = new char[Length + 1];
	strcpy_s(tmp, Length + 1, Buffer);
	strcat_s(tmp, Length + 1, Tail);
	delete[] Buffer;
	Buffer = tmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	String s0, s1("a string.");
	s0.Print();
	s1.Print();
	cout << s1.Getlength() << endl;
	s1.Setc(5, 'p');
	s1.Print();
	cout << s1.Getc(6) << endl;
	String s2("this ");
	s2.Append("a string.");
	s2.Print();

	int a;
	cin >> a;
	return 0;
}

