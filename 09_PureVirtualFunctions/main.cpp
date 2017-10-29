#include "shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() 
{
	//Shape  shape[5];
	Shape* shape[3] = {NULL, };

	shape[0] = new Rectangle(250, 250, 150, 150);
	shape[1] = new Rectangle(300, 300, 100, 100);
	shape[2] = new Circle(100, 300, 150);

	for (int i = 0; i < 3; i++)
		shape[i]->draw();
	//shape[0]->draw();
	//shape[2]->draw();

	for (int i = 0; i < 3; i++)
	{
		delete shape[i];
		shape[i] = NULL;
	}

	return 0;
}