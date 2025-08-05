// Convert base 10 values to base X 
// NOTE: i dont know how to yet represent n < 0 so u_int will only be available

#include <iostream>
#include <string> // binary value
#include <algorithm> // reverse()
#include <math.h> // pow()
#include <unordered_map> // hexadecimal conversion

// ============================== Binary (Base 2) =============================
// Values 0-1;
// Division option
std::string toBinaryD(unsigned int value) {
    // edge case
    if (value == 0) { return "0"; }
    std::string res = "";
    while (value != 0) {
        res += std::to_string(value % 2);
        value /= 2; 
    }

    std::reverse(res.begin(), res.end());
    return res;
}

// Subtraction method
std::string toBinaryS(unsigned int value) {
    // edge case
    if (value == 0) { return "0"; }

    std::string res = ""; // solution
    bool firstOne = false; // stops preceding 0s when no 1s are found

    for (short i = 32; i >= 0; i--) {
        if (pow(2, i) <= value) {
            res += '1';
            firstOne = true;
            value = value - pow(2, i);
        } else {
            if (firstOne) {
                res += '0';
            }
        }
    }
    return res;
}

// ============================== Octal (Base 8) =============================
// Values 0-7
// Division option
std::string toOctalD(unsigned int value) {
    // edge case
    if (value == 0) { return "0"; }
    std::string res = "";
    while (value != 0) {
        res += std::to_string(value % 8);
        value /= 8; 
    }

    std::reverse(res.begin(), res.end());
    return res;
}
// ============================== Hexadecimal (Base 16) =============================
// Values 0-9, A-F
// Division option
std::string toHexD(unsigned int value) {
    // edge case
    if (value == 0) { return "0"; }

    std::unordered_map<std::string, char> hexConversion = {
        {"10", 'A'},
        {"11", 'B'},
        {"12", 'C'},
        {"13", 'D'},
        {"14", 'E'},
        {"15", 'F'}
    };

    std::string res = "";
    while (value != 0) {
        if (value % 16 < 10) {
            res += std::to_string(value % 16);
        } else {
            res += hexConversion[std::to_string(value % 16)];
        }
        value /= 16; 
    }

    std::reverse(res.begin(), res.end());
    return res;
}

int main(void) {
    unsigned int x = 69420;
    unsigned int y = 100000;

    std::cout << "The value " << x << " in binary using Division is: " << toBinaryD(x) << std::endl;
    std::cout << "The val " << x << " in binry using Subtraction is: " << toBinaryS(x) << std::endl;
    std::cout << "The value " << y << " in binary using Division is: " << toBinaryD(y) << std::endl;
    std::cout << "The val " << y << " in binry using Subtraction is: " << toBinaryS(y) << std::endl;

    std::cout << "The value: " << x << " in octal using division is: " << toOctalD(x) << std::endl;
    std::cout << "The value: " << y << " in octal using division is: " << toOctalD(y) << std::endl;

    std::cout << "The value " << x << " in hexadecimal using Division is: " << toHexD(x) << std::endl;
    std::cout << "The value " << y << " in hexadecimal using Division is: " << toHexD(y) << std::endl;

    return 0;
}