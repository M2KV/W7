#include"Square.h"

Square::Square() {}

bool Square::isValidSquare()
{
	return (Rectangle::isValidRectangle() && topleft.calcDistance(topright) == topleft.calcDistance(bottomleft));
}

float Square::Perimeter()
{
	return 4 * topleft.calcDistance(topright);
}