#pragma once
#include <string>

class Musician {
    public:
        // =================== Constructors
        // Default
        Musician();
        // Constructor with info
        Musician(std::string instrumentInp, int experienceInp);

        // ================== Functions
        std::string get_instrument();
        int get_experience();
        
    private: 
        // Attributes
        std::string instrument;
        int experience;
};