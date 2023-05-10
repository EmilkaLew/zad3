

#pragma once


#include "shape.h"

class RightTriangle : public Shape
{
public:
	
	int rotation; //od 1 do 4, jak wskazówki zegara 
	RightTriangle(int h, int r, char s, string c);
	virtual void Fill();
	


};

