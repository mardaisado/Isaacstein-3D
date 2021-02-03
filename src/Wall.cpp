#include "Wall.h"
#include "Point.h"

Wall::Wall(/* args */)
{
    this->p1 = Point();
    this->p2 = Point();
}

Wall::Wall(Point p1,Point p2){
    this->p1 = p1;
    this->p2 = p2;
}

Wall::~Wall()
{
}