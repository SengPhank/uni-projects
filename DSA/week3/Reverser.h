#pragma once
#include <bits/stdc++.h>
class Reverser {
    public:
    
    int reverseDigit(int value);
    int reverseDigitHelper(int value, int r = -1, int n = -1);

    std::string reverseString(std::string characters);
    std::string reverseStringHelper(std::string& s, int idx=0);
};
