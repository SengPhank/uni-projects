#include <iostream>
#include "wizard.h"

Wizard::Wizard(std::string n, int h, int d, int m) : Player(n , h , d) {
    this->mana = m;
}

void Wizard::castSpell(Player* opponent) {
    if (!opponent) return;
    std::cout << this->name << " casts a spell on " << opponent->getName() 
    << " for " << this->mana << " damage.\n";
    this->attack(opponent, this->mana);
}