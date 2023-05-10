#include <iostream>
using namespace std;

#include "Tree.h"


Tree::Tree(int h, char s, string c) : Shape(h, s, c)
{
	width = 2 * height - 1;
	Alloc();
	Fill();
}

void Tree::Fill()
{
	int i, j;
	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
	}

}


