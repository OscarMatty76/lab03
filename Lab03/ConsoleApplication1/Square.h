#include "stdafx.h"

class Square
{
public:
	Square(int x, int y, int length);

	void setX(int setX);
	void setY(int setY);
	void setLength(int setLength);

	int getX();
	int getY();
	int getLength();

	void printSquare();

	int surface();

	bool isInSquire(int inX, int inY);

private:
	int x;
	int y;
	int length;


};