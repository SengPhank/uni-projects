// convert base X to base 10
#include <iostream>
#include <string> // bin strings
#include <math.h> // pow() function
#include <unordered_map> // hexConversion

long long fromB10(std::string binary) {
    long long res = 0;
    for (int i = binary.size()-1; i >= 0; i--) {
        if (binary[i] == '1') {
            res += pow(2, binary.size()-i-1);   
        } else if (binary[i] != '0') {
            std::cout << "Invalid binary: " << binary[i] << std::endl;
            return 0; // invalid string
        }
    }
    return res; 
}

long long fromB8(std::string octal) {
    long long res = 0;
    for (int i = octal.size()-1; i >= 0; i--) {
        res += pow(8, octal.size()-1-i) * (octal[i] - '0');   
    }
    return res;
}

// TO BE FIXED
long long fromB16(std::string hexadecimal) {
    std::unordered_map<char, int> hexConversion = {
        {'A', 10},
        {'B', 11},
        {'C', 12},
        {'D', 13},
        {'E', 14},
        {'F', 15}
    };

    long long res = 0;
    for (int i = hexadecimal.size()-1; i >= 0; i--) {
        if (hexConversion.count(hexadecimal[i])) {
            res += pow(8, hexadecimal.size()-1-i) * hexConversion[hexadecimal[i]];
        } else {
            res += pow(8, hexadecimal.size()-1-i) * (hexadecimal[i] - '0');   
        }
    }
    
    return 0;
}
int main(void) {
    std::string b1 = "10000111100101100";
    std::cout << "Binary value: " << b1 << " is the number: " << fromB10(b1) << std::endl;

    std::string o1 = "36"; // expected : 30
    std::string o2 = "207454"; // Expected : 69420
    std::cout << "Octal value: " << o1 << " is the number: " << fromB8(o1) << std::endl;
    std::cout << "Octal value: " << o2 << " is the number: " << fromB8(o2) << std::endl;

    std::string he1 = "186A0"; // expected : 100000
    std::string he2 = "10F2C"; // Expected : 69420
    std::cout << "Hex value: " << he1 << " is the number: " << fromB16(he1) << std::endl;
    std::cout << "Hex value: " << he2 << " is the number: " << fromB16(he2) << std::endl;

    return 0;
}