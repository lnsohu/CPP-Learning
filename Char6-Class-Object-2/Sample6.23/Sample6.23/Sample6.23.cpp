// Sample6.23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class List;
class Item
{public:
	friend class List;
private:
	Item(int d = 0){ data = d; next = 0; }
	Item *next;
	int data;
};

class List
{
public:
	List(){ list = 0; }
	List(int d){ list = new Item(d); }
	int print();
	int insert(int d = 0);
	int append(int d = 0);
	void cat(List &il);
	void reverse();
	int length();
private:
	Item *end();
	Item *list;
};

int List::print()
{
	if (list == 0)
	{
		cout << "empty\n";
		return 0;
	}

	cout << "(";
	int cnt = 0;
	Item *pt = list;
	while (pt)
	{
		if (++cnt % 40 == 1 && cnt != 1)
			cout << endl;
		cout << pt->data << " ";
		pt = pt->next;
	}
	cout << ")\n";
	return cnt;
}

int List::insert(int d)
{
	Item *pt = new Item(d);
	pt->next = list;
	list = pt;
	return d;
}

int List::append(int d)
{
	Item *pt = new Item(d);
	if (list == 0)
		list = pt;
	else
		(end())->next = pt;
	return d;
}

Item *List::end()
{
	Item *prv, *pt;
	for (prv = pt = list; pt; prv = pt, pt = pt->next)
		;
	return prv;
}

void List::cat(List&il)
{
	Item *pt = il.list;
	while (pt)
	{
	
		append(pt->data);
		pt = pt ->next;
	}
}

void List::reverse()
{
	Item *pt, *prv, *tmp;
	prv = 0;
	pt = list;
	list = end();
	while (pt != list)
	{
		tmp = pt->next;
		pt->next = prv;
		prv = pt;
		pt = tmp;
	}
	list->next = prv;
}

int List::length()
{
	int cnt = 0;
	Item *pt = list;
	for (; pt; pt = pt->next, cnt++)
		;
	return cnt;
}

int _tmain(int argc, _TCHAR* argv[])
{
	List list1;
	list1.print();
	for (int i = 10; i < 18; i++)
		list1.insert(i);
	cout << "list: ";
	list1.print();
	
	List list2;
	for (int i = 15; i < 20; i++)
		list2.append(i);
	cout << "list2: ";
	list2.print();
	cout << "list1 length: " << list1.length() << endl;

	list2.cat(list1);
	cout << "list2; ";
	list2.print();

	list2.reverse();
	cout << "list2: ";
	list2.print();
	cout << "list2 length: " << list2.length() << endl;

	cin.get();
	return 0;
}

