#pragma once

struct Color
{
	float _red;
	float _green;
	float _blue;

	Color();
	Color(const float, const float, const float);
	Color(const Color&);
};

struct Point
{
	double _x;
	double _y;

	Point();
	Point(double, double);
	Point(const Point&);
};

class Figure
{
public:
	void SetColor(const Color& color) { _color = color; }
	virtual void Draw() = 0;

protected:
	Figure();
	Figure(const Color&);
	Color _color;
};
