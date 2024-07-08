#include <iostream>
using namespace std;

class TPoint
{
public:
	void SetPoint(int x, int y);
	int Xcoord()
	{
		return X;
	}
	int Ycoord()
	{
		return Y;
	}
	void Move(int xOffset, int yOffset);

private:
	int X, Y;
};

void TPoint::SetPoint(int x, int y)
{
	X = x;
	Y = y;
}

void TPoint::Move(int xOffset, int yOffset)
{
	X += xOffset;
	Y += yOffset;
}