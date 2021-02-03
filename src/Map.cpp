#include "Map.h"
#include <vector>
// test map
Map::Map(/* args */)
{
    addWall(0,0,500,0);
    addWall(500,0,500,500);
    addWall(500,500,0,500);
    addWall(0,500,0,0);
}

void Map::addWall(Point p1, Point p2){
    Wall *w = new Wall(p1,p2) ;
    
    walls.push_back(w);
}

void Map::addWall(int x1, int y1, int x2, int y2){
    addWall(Point(x1,y1),Point(x2,y2));
}

Map::~Map()
{
}