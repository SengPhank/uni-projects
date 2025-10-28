// Creature.cpp (Skeleton)
#include <iostream>
#include <array>
#include "Creature.h"

int Creature::totalCreatures = 0;

Creature::Creature(const std::string& name, int cost, CreatureType t, int atk,
                   int def) : Card(name, cost) {
  // TODO: initialize type, attack, defense
  // TODO: increment totalCreatures count
  this->type = t;
  this->attack = atk;
  this->defense = def;
  Creature::totalCreatures++;
}

Creature::Creature(const Creature& other) : Card(other.name, other.cost) {
  // TODO: copy other's type, attack, defense
  // TODO: increment totalCreatures count
  this->type = other.type;
  this->attack = other.attack;
  this->defense = other.defense;
  Creature::totalCreatures++;

}

Creature::~Creature() {
  // TODO: decrement totalCreatures count
  Creature::totalCreatures--;
}

void Creature::printInfo() const {
  // TODO: print creature details in format:
  // "Creature - <name> (Cost <cost>): Creature Type=<typeName>,
  // Attack=<attack>, Defense=<defense>"
  std::cout << "Creature - " << this->name << " (Cost " << this->cost << "): Creature Type=" 
  << typeStr(this->type) << ", Attack=" << this->attack << ", Defense=" << this->defense << std::endl;
}

std::string Creature::typeStr(CreatureType c) const {
    if (c == CreatureType::WARRIOR) {
        return "Warrior";
    } else if (c == CreatureType::MAGE) {
        return "Mage";
    }
    return "Archer";
}
int Creature::getAttack() const {
  // TODO
  return this->attack;
}

int Creature::getDefense() const {
  // TODO
  return this->defense;
}

Creature::CreatureType Creature::getCreatureType() const {
  // TODO
  return this->type;
}

int Creature::getTotalCreatures() {
  // TODO
  return Creature::totalCreatures;
}
// clone() method creates a deep copy of the Creature object using the copy
// constructor
Card* Creature::clone() const { return new Creature(*this); }
// getType() method reuturns the Type for a Card object
Card::Type Creature::getType() const { return Type::CREATURE; }