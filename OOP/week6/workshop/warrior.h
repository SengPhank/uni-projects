#pragma once
#include <string>
#include "player.h"

class Warrior : public Player {
    private:
        std::string weapon;
    public:
        // Constructor
        Warrior(std::string n, int h, int d, std::string w);
        // Swing
        void swingWeapon(Player* opponent);
};