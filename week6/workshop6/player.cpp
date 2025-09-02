#include <iostream>
#include "player.h"
Player::Player(std::string n, int h, int d) {
    this->name = n;
    this->health = h;
    this->damage = d;
}

void Player::attack(Player* opponent, int d) {
    opponent->takeDamage(d);
}
void Player::setHealth(int h) {
    this->health = h;
}
void Player::takeDamage(int d) {
    this->health -= d;
    std::cout << this->name << " takes " << d << " damage. Remaining health: " << this->health << "\n";
}
std::string Player::getName() {
    return this->name;
}
int Player::getHealth() {
    return this->health;
}
int Player::getDamage() {
    return this->damage;
}