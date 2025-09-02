#include <iostream>
#include "warrior.h"

Warrior::Warrior(std::string n, int h, int d, std::string w) : Player(n, h, d) {
    this->weapon = w;
}

void Warrior::swingWeapon(Player* opponent) {
    if (!opponent) return;
    std::cout << this->name << " swings their " << this->weapon 
    << " at " << opponent->getName() << "!\n";
    this->attack(opponent, this->damage);
}