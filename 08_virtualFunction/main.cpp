#include "shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() 
{
	Shape* shape[3] = {NULL, };
	Shape shape1[2];
	Rectangle rect(300, 300, 100, 100);
	Circle ciec(100, 300, 150);

	shape[0] = new Shape(100, 100);
	shape[1] = new Rectangle(300, 300, 100, 100);
	shape[2] = new Circle(100, 300, 150);

	shape1[0] = rect;
	shape1[1] = ciec;

	for (int i = 0; i < 3; i++)
		shape[i]->draw();

	for (int i = 0; i < 3; i++)
	{
		delete shape[i];
		shape[i] = NULL;
	}

	shape1[0].draw();
	shape1[1].draw();

	return 0;
}