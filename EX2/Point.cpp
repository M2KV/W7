#include "Point.h"

istream& operator >>(istream& inp, Point& pt)
{
	cout << "Nhap X: ";
	inp >> pt.x;

	cout << "Nhap Y: ";
	inp >> pt.y;

	return inp;
}

ostream& operator <<(ostream& out, const Point& pt)
{
	out << "(" << pt.x << "," << pt.y << ")";
	return out;
}

float Point::calcDistance(Point pt)
{
	return (sqrt(pow((pt.x - x), 2) + pow((pt.y - y), 2)));
}