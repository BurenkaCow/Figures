#include "circle.h"
#include <GL/glut.h>
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle() : _center(0, 0), _radius(0), _accuracy(100)
{
}

Circle::Circle(const Point& center, const double radius, const Color& color) : _center(center), _radius(radius), _accuracy(100), Figure(color)
{
}

void Circle::Draw()
{
	glColor3f(_color._red, _color._green, _color._blue);
	glBegin(GL_LINE_STRIP);

	for (double i = 0.; i < _accuracy + 1.; i++)
	{
		double angle = 2. * M_PI * i / _accuracy;
		double dx = _radius * cos(angle);
		double dy = _radius * sin(angle);
		glVertex2f(_center._x + dx, _center._y + dy);
	}

	glEnd();
}
