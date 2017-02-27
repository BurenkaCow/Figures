#include "figure.h"

Color::Color() : _red(0), _green(0), _blue(0)
{
}

Color::Color(const float red, const float green, const float blue) : _red(red), _green(green), _blue(blue)
{
}

Color::Color(const Color& color) : _red(color._red), _green(color._green), _blue(color._blue)
{
}

Point::Point() : _x(0), _y(0)
{
}

Point::Point(double x, double y) : _x(x), _y(y)
{
}

Point::Point(const Point& point) : _x(point._x), _y(point._y)
{
}

Figure::Figure() : _color(0, 0, 0)
{
}

Figure::Figure(const Color& color) : _color(color)
{
}

