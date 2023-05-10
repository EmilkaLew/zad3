

#include <iostream>
using namespace std;

#include "RightTriangle.h"


RightTriangle::RightTriangle(int h, int r, char s, string c) : Shape(h, s, c) {

	rotation = r;
	width = h;

	Alloc();
	Fill();

}


void RightTriangle::Fill()
{
	int i, j;

	if (rotation == 1) {
		for (j = 0; j < height; j++)
		{
			for (i = j; i < height; i++)
				tab[j][i] = 1;
		}
	}else

	if (rotation == 2) {
		for (j = 0; j < height; j++)
		{
			for (i = height - j - 1; i < height; i++)
				tab[j][i] = 1;
		}
	}else

	if (rotation == 3) {
		for (j = 0; j < height; j++)
		{
			for (i = 0; i < j + 1; i++)
				tab[j][i] = 1;
		}
	}else
	
	if (rotation == 4) {
		for (j = 0; j < height; j++)
		{
			for (i = 0; i < height - j; i++)
				tab[j][i] = 1;
		}
	}





}
