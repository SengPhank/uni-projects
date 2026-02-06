#include <string>
#include "Orchestra.h"


// === Constructors
Orchestra::Orchestra() {
    this->orchestraSize = 0; // Default size is 0
    this->numMembers = 0;
    this->members = new Musician[0];
}
Orchestra::Orchestra(int size) {
    this->orchestraSize = size;
    this->numMembers = 0;
    this->members = new Musician[size];
}

// === Functions
int Orchestra::get_current_number_of_members() {
    return this->numMembers;
}
// returns true if any musician in the orchestra plays the specified instrument
bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < this->numMembers; i++) {
        if (this->members->get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}
// returns the array of members of the orchestra
Musician* Orchestra::get_members() {
    return this->members;
}
// returns true and adds new musician to the orchestra if the orchestra is not full
bool Orchestra::add_musician(Musician new_musician) {
    if (this->numMembers >= this->orchestraSize) { return false; }
    this->members[this->numMembers++] = new_musician;
    return true;
}

// === Deconstructor
Orchestra::~Orchestra() {
    delete[] this->members;
}
// private:
//     int orchestraSize;
//     Musician* members;
//     int numMembers;