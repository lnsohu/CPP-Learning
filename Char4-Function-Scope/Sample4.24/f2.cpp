#include "stdafx.h"

static int i(10);
extern int next1()
{
	return i += 1;
}

extern int last()
{
	return i -= 1;
}

extern int other(int i)
{
	static int j(5);
	return i = j += 1;
}