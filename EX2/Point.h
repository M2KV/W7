#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	float x, y;

public:
	friend istream& operator >>(istream& inp, Point& pt);
	friend ostream& operator <<(ostream& out, const Point& pt);
	float calcDistance(Point pt);
};