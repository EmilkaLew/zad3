#pragma once
#include "Shape.h"

class Tree : public Shape {
public:
	Tree(int h, char s, string c);
	virtual void Fill();

};