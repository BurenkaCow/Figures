#pragma once

#include "figure.h"

class Circle : public Figure
{
public:
	Circle();
	Circle(const Point&, const double, const Color&);
	void SetCenter(const Point& center) { _center = center; }
	void SetRadius(const double radius) { _radius = radius; }
	void SetAccuracy(const unsigned int accuracy) { _accuracy = accuracy; }
	virtual void Draw();

private:
	Point _center;
	double _radius;
	unsigned int _accuracy;
};
