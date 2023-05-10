
/*
#include <iostream>
using namespace std;

#include "Tree.h"


void Tree::printTree() {
	int i, j;

	cout << color;

	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i > 0; i--)
			cout << ' ';

		for (i = 0; i < 2 * j + 1; i++)
			cout << '*';

		cout << endl;
	}

	cout << "\033[0m";

}

Tree::Tree(int h, char s, string c)
{
	int i, j;
	height = h;
	width = 2 * h - 1;
	symbol = s;


	if (c == "green") color = "\033[1;32m";
	if (c == "red") color = "\033[1;31m";
	if (c == "yellow") color = "\033[1;33m";

	tab = new int* [height];
	for (j = 0; j < height; j++) {
		tab[j] = new int[width];
		for (i = 0; i < width; i++)
			tab[j][i] = 0;
	}

	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
	}

	counter++;


}

Tree::~Tree()
{
	int j;
	counter--;
	cout << "kasuje drzewo\nzostalo " << counter << "\n";
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;

}
*/