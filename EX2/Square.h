#pragma once
#include"Rectangle.h"

class Square : public Rectangle
{
public:
	Square(); 
	float Perimeter();
	bool isValidSquare();
};