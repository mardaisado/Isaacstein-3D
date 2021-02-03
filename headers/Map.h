#ifndef MAP_H_   /* Include guard */
#define MAP_H_

#include <vector>
#include "Point.h"
#include "Wall.h"

using namespace std;

class Map
{
private:
    /* data */
public:

    int width;
    int height;
    vector<Wall*> walls;

    void addWall(Point p1, Point p2);
    void addWall(int x1,int y1, int x2, int y2);
    Map(/* args */);
    ~Map();
};

#endif // MAP_H_