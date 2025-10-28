// Land.cpp (Skeleton)
#include <iostream>

#include "Land.h"

int Land::totalLands = 0;

Land::Land(const std::string& name, int cost, LandType t) : Card(name, cost) {
  // TODO: initialize landType
  // TODO: increment totalLands count
  this->landType = t;
  Land::totalLands++;
}

Land::Land(const Land& other) : Card(other.name, other.cost) {
  // TODO: copy other's landType
  // TODO: increment totalLands count
  this->landType = other.landType;
  Land::totalLands++;
}

Land::~Land() {
  // TODO: decrement totalLands count
  Land::totalLands--;
}

void Land::printInfo() const {
  // TODO: print land details in format:
  // "Land - <name> (Cost <cost>): <TypeName> land."
  std::cout << "Land - " << this->name << " (Cost " << this->cost << "): " << this->landName() << " land." << std::endl;
}

std::string Land::landName() const {
    if (this->landType == LandType::FOREST) {
        return "Forest";
    } else if (this->landType == LandType::MOUNTAIN) {
        return "Mountain";
    }
    return "Swamp";
}

Land::LandType Land::getLandType() const {
  // TODO
  return this->landType;
}

int Land::getTotalLands() {
  // TODO
  return Land::totalLands;
}
// clone() method creates a deep copy of the Landobject using the copy
// constructor
Card* Land::clone() const { return new Land(*this); }
// getType() method returns the Type for a Card object
Card::Type Land::getType() const { return Type::LAND; }