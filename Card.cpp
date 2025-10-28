#include <iostream>
#include "Card.h"

int Card::totalCards = 0;

Card::Card(const std::string& n, int c) : name(n), cost(c) {
  // TODO: increment totalCards count
  this->name = n;
  Card::totalCards++;
}

Card::~Card() {
  // TODO: decrement totalCards count
  this->totalCards--;
}

std::string Card::getName() const {
  // TODO: return the card name
  return this->name;
}

int Card::getCost() const {
  // TODO: return the card cost
  return this->cost;
}

int Card::getTotalCards() {
  // TODO: return the totalCards count
  return Card::totalCards;
}