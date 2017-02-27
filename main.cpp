#include "polygon.h"
#include "circle.h"
#include "rectangle.h"
#include <GL/glut.h>
#include <memory> 

void initWindow(int *iArgc, char* iArgv[]);
void display();

int main(int argc, char* argv[])
{
	initWindow(&argc, argv);

	glutDisplayFunc(display);

	glutMainLoop();

	return 0;
}

void initWindow(int *iArgc, char* iArgv[])
{
	glutInit(iArgc, iArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Simple figures");
	glClearColor(0.9, 0.9, 0.9, 0.0);
	glViewport(0, 0, 600, 600);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 25, 0, 25);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	std::vector<Point> verticesForPolygon;
	verticesForPolygon.push_back(Point(12, 16));
	verticesForPolygon.push_back(Point(15, 24));
	verticesForPolygon.push_back(Point(23, 21));
	verticesForPolygon.push_back(Point(22, 17));
	Color colorForPolygon(1, 0, 0);
	auto polygon = std::make_shared<Polygon>(verticesForPolygon, colorForPolygon);
	verticesForPolygon.~vector();
	colorForPolygon.~Color();

	auto rectangle = std::make_shared<Rectangle>(Point(10, 10), Point(15, 13), Color(0, 1, 0));

	auto circle1 = std::make_shared<Circle>(Point(5, 5), 4, Color(0, 0, 1));

	auto circle2 = std::make_shared<Circle>();
	circle2->SetCenter(Point(16, 6));
	circle2->SetRadius(3);
	circle2->SetColor(Color(1, 1, 0));
	circle2->SetAccuracy(10);

	std::vector<std::shared_ptr<Figure>> figures;
	figures.push_back(polygon);
	figures.push_back(circle1);
	figures.push_back(circle2);
	figures.push_back(rectangle);
	for (unsigned int i = 0; i < figures.size(); i++)
	{
		figures[i]->Draw();
	}

	glFlush();
}
