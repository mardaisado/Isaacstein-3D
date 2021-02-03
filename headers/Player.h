#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
private:
    /* data */
public:
    int x;
    int y;
    int angle;

    Player(/* args */);
    Player(int x, int y);

    void setX(int x);
    void setY(int y);
    void setPos(int x, int y);

    ~Player();
};

#endif