#include <iostream>
using namespace std;

class TPoint 
{
public:
	TPoint(int x, int y)
	{
		X = x, Y = y;
	}
	TPoint(TPoint & p);
	~TPoint()
	{
		cout << "Destructor Called.\n";
	}
	int Xcoord()
	{
		return X;
	}
	int Ycoord()
	{
		return Y;
	}

private:
	int X, Y;
};

TPoint ::TPoint (TPoint & p)
{
	X = p.X;
	Y = p.Y;
	cout << "Copy_initialization Constructor Called.\n";
}
