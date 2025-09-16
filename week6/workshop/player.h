#pragma once
#include <string>
class Player {
    protected:
        std::string name;
        int health;
        int damage;

    public:
        Player(std::string n, int h, int d);
        void attack(Player* opponent, int d);
        void setHealth(int h);
        void takeDamage(int d);
        std::string getName();
        int getHealth();
        int getDamage();
};