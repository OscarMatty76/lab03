#include "Square.h"
#include<iostream>

using namespace std;

Square::Square(int inx, int iny, int inlength)
{
	x = inx;
	y = iny;
	length = inlength;
}


void Square::setX(int setX)
{
	x = setX;
}

void Square::setY(int setY)
{
	y = setY;
}

void Square::setLength(int setLength)
{
	length = setLength;
}

int Square::getX()
{
	return x;
}

int Square::getY()
{
	return y;
}

int Square::getLength()
{
	return length;
}

void Square::printSquare()
{
	cout << "X: " << x << " Y: " << y << " Length: " << length << endl;
}

int Square::surface()
{
	int temp = length;
	return (temp*temp);
}

bool Square::isInSquire(int inX, int inY)
{
	if (((x + length) >= inX) && (y + length) >= inY)
	{
		return true;
	}
	else
	{
		return false;
	}





}