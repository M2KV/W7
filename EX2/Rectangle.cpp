#include "Rectangle.h"

Rectangle::Rectangle() {  }

istream& operator >>(istream& inp, Rectangle& R)
{
	cout << "Nhap dinh A: \n";
	inp >> R.topleft;

	cout << "\nNhap dinh B: \n";
	inp >> R.topright;

	cout << "\nNhap dinh C: \n";
	inp >> R.bottomright;

	cout << "\nNhap dinh D: \n";
	inp >> R.bottomleft;

	return inp;
}

ostream& operator <<(ostream& out, const Rectangle& R)
{
	out << "A" << R.topleft << "\n";
	out << "B" << R.topright << "\n";
	out << "C" << R.bottomright << "\n";
	out << "D" << R.bottomleft << "\n";
	return out;
}

bool Rectangle::isValidRectangle()
{
	float c1 = topleft.calcDistance(topright);
	float c2 = bottomright.calcDistance(bottomleft);

	if (topleft.calcDistance(topright) == bottomleft.calcDistance(bottomright)
		&& topleft.calcDistance(bottomleft) == topright.calcDistance(bottomright)
		&& topleft.calcDistance(bottomright) == topright.calcDistance(bottomleft)) return true;
	return false;
}


float Rectangle::Perimeter()
{
	float c1 = topleft.calcDistance(topright);
	float c2 = topleft.calcDistance(bottomleft);
	return (c1 + c2) * 2;
}

float Rectangle::Area()
{
	float c1 = topleft.calcDistance(topright);
	float c2 = topleft.calcDistance(bottomleft);
	return c1 * c2;
}