#include "polygon.h"
#include <GL/glut.h>

Polygon::Polygon()
{
}

Polygon::Polygon(const std::vector<Point> &vertices, const Color &color) : _vertices(vertices), Figure(color)
{
}

void Polygon::Draw()
{
	glColor3f(_color._red, _color._green, _color._blue);
	glBegin(GL_LINE_STRIP);
	for (auto vertices : _vertices)
	{
		glVertex2d(vertices._x, vertices._y);
	}
	glVertex2d(_vertices[0]._x, _vertices[0]._y);
	glEnd();
}
