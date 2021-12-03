#pragma once
#include "Point.h"
using namespace std;

class Rectangle
{
protected:
	Point topleft, topright, bottomright, bottomleft;

public:
	friend istream& operator >>(istream& inp, Rectangle& rect);
	friend ostream& operator <<(ostream& out, const Rectangle& rect);

	Rectangle();
	
	float Perimeter();
	float Area();

	bool isValidRectangle();
};