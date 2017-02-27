#pragma once

#include "polygon.h"

class Rectangle : public Polygon
{
public:
	Rectangle(const Point&, const Point&, const Color&);
	void SetVercites(const Point&, const Point&);

private:
	void SetVercites(const std::vector<Point>&);
};
