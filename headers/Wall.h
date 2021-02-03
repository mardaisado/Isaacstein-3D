#ifndef WALL_H_   /* Include guard */
#define WALL_H_

#include <vector>
#include "Point.h"

class Wall
{
private:
    /* data */
public:
    Point p1;
    Point p2;

    Wall();
    Wall(Point p1,Point p2);
    ~Wall();
};




#endif // WALL_H_