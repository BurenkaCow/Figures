#include "rectangle.h"

Rectangle::Rectangle(const Point &leftDown, const Point &rightUp, const Color &color)
{
	SetVercites(leftDown, rightUp);
	SetColor(color);
}

void Rectangle::SetVercites(const Point &leftDown, const Point &rightUp)
{
	std::vector<Point> vectices;
	vectices.push_back(leftDown);
	vectices.push_back(Point(leftDown._x, rightUp._y));
	vectices.push_back(rightUp);
	vectices.push_back(Point(rightUp._x, leftDown._y));
	Polygon::SetVercites(vectices);
}

void Rectangle::SetVercites(const std::vector<Point>& rectangle)
{
}
