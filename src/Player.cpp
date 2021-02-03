#include "Player.h"

Player::Player(){
    x = 0;
    y = 0;
}

Player::Player(int x, int y){
    this->x = x;
    this->y = y;
}

void Player::setX(int x){
    this->x = x;
}

void Player::setY(int y){
    this->y = y;
}

void Player::setPos(int x, int y){
    this->x = x;
    this->y = y;
}

Player::~Player(){

}