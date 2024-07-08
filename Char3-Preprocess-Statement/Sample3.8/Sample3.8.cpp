// Sample3.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float d1, d2;
	char op;
	cout << "Input d1 op d2: ";
	cin >> d1 >> op >> d2;

	switch(op)
	{
		float temp;
	case '+': temp = d1 + d2;
		cout << d1 << op << d2 << "=" << temp << endl;
		break;
	case '-': temp = d1 - d2;
		cout << d1 << op << d2 << "=" << temp << endl;
		break;
	case '*': temp = d1 * d2;
		cout << d1 << op << d2 << "=" << temp << endl;
		break;
	case '/': temp = d1 / d2;
		cout << d1 << op << d2 << "=" << temp << endl;
		break;
	default: cout << "Error!\n";
	}

	cin >> op;
	return 0;
}

