#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

#include "Forest.h"

Forest::Forest(int h, int w)
{
	int i, j;
	H = h;
	W = w;

	tab = new int* [H];
	for (j = 0; j < H; j++) {
		tab[j] = new int[W];
		for (i = 0; i < W; i++)
			tab[j][i] = 0;
	}

}

Forest::~Forest()
{
	int j;
	for (j = 0; j < H; j++)
		delete tab[j];
	delete tab;

	for (auto t : trees)
		delete t;

	trees.clear();

}

Forest& Forest::operator+=(Shape* sh) {
	this->AddShape(sh, sh->y, sh->x);
	return *this;
}

void Forest::AddShape(Shape* sh, int y, int x)
{
	int i, j;
	sh->x = x;
	sh->y = y;

	trees.push_back(sh);

	for (j = 0; j < sh->height; j++)
		for (i = 0; i < sh->width; i++)
			if (sh->tab[j][i])
				tab[j + y][i + x] = sh->tab[j][i] * trees.size();


}

void Forest::PrintForest() {
	int i, j;

	for (j = 0; j < H; j++) {
		for (i = 0; i < W; i++) {
			int k = tab[j][i];
			assert((k >= 0) && (k <= trees.size()));
			if (k)
			{
				cout << trees[k - 1]->color;
				cout << trees[k - 1]->symbol;

			}
			else
				cout << " ";
		}
		cout << endl << "\033[0m";
	}
	cout << "Jest " << Tree::counter << " drzew\n";

}