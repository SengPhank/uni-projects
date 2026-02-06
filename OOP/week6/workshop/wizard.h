#pragma once
#include <string>
#include "player.h"

class Wizard : public Player {
    private:
        int mana;
    public:
        Wizard(std::string n, int h, int d, int m);
        void castSpell(Player* opponent);
};