#pragma once

class Shape {
protected:
	int height;
	int width;
	string color;
	string colorname;
	char symbol;

	int** tab;

	
	
public:
	void Print();
	int x, y;
	virtual void Fill() = 0;
	void Alloc();

	Shape(int h, char s, string c);
	~Shape();

	static int counter;

	Shape* setXY(int x, int y);

	friend class Forest;


};