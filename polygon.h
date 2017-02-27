#pragma once

#include "figure.h"
#include <vector>

class Polygon : public Figure
{
public:
	Polygon();
	Polygon(const std::vector<Point>&, const Color&);
	void SetVercites(const std::vector<Point>& vertices) { _vertices = vertices; };
	virtual void Draw();

private:
	std::vector<Point> _vertices;
};
