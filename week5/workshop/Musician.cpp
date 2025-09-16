#include <string>
#include "Musician.h"

// Default
Musician::Musician() { // If no input, defauly value
    this->instrument = "null";
    this->experience = 0;
}
// Constructor with info
Musician::Musician(std::string instrumentInp, int experienceInp) {
    this->instrument = instrumentInp;
    this->experience = experienceInp;
}

// ================== Functions
std::string Musician::get_instrument() {
    return this->instrument;
}    
int Musician::get_experience() {
    return this->experience;
}       