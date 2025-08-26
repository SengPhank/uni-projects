#pragma once
#include <string>
#include "Musician.h"

class Orchestra {
    public:
        // === Constructors
        Orchestra();
        Orchestra(int size);

        // === Functions
        int get_current_number_of_members();
        // returns true if any musician in the orchestra plays the specified instrument
        bool has_instrument(std::string instrument); 
        // returns the array of members of the orchestra
        Musician *get_members();     
        // returns true and adds new musician to the orchestra if the orchestra is not full
        bool add_musician(Musician new_musician);

        // === Deconstructor
        ~Orchestra();
    private:
        int orchestraSize;
        Musician* members;
        int numMembers;

};