// 123A_Forest.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;


#include "Rectangle.h"
#include "Forest.h"
#include "Border.h"
#include "Tree.h"
#include "RightTriangle.h"

int Shape::counter = 0;


int main()
{

    Forest las = Forest(15, 60);

    /*
    Rectangle *p = new Rectangle(5, 7, '*', "green");
    Rectangle *k = new Rectangle(5, '*', "yellow");
    Border* b = new Border(*p, 1);
    Tree* c = new Tree(5, '*', "red");
   
    las.AddShape(p, 2, 2);
    las.AddShape(k, 7, 20);
    las.AddShape(b, 3, 40);

    c->setXY(33, 4);
    las += c;
    */

    Rectangle* walls = new Rectangle(8,15, '*', "yellow");
    Rectangle* door = new Rectangle(5,3,'#',"red");
    Border* window = new Border(3,5,'[',"green",1);
    Rectangle* roof = new Rectangle(3, 15, 'O', "green");
    RightTriangle* leftroof = new RightTriangle(3, 2,'O',"green");
    RightTriangle* rightroof = new RightTriangle(3, 3, 'O', "green");
    Tree* t1 = new Tree(5, 'C', "green");
    Tree* t2 = new Tree(6, 'C', "green");


    las.AddShape(walls, 5, 20);
    las.AddShape(door, 8, 22);
    las.AddShape(window, 8, 26);
    las.AddShape(roof, 2, 20);
    las.AddShape(leftroof, 2, 17);
    las.AddShape(rightroof, 2, 35);
    las.AddShape(t1, 1, 7);
    las.AddShape(t2, 4, 45);

    las.PrintForest();





}


   