#pragma once
#include "Shape.h"

class Rectangle : public Shape {

public:
	using Shape::Shape;

	virtual void Fill();
	Rectangle(int h, int w, char s, string c);
	Rectangle(int h, char s, string c);
	Rectangle(const Rectangle &p);
};
