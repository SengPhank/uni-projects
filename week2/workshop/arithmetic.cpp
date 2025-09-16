#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

// Convert Binary to Number
unsigned int fromB10(std::string binary) {
    unsigned int res = 0;
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

// Convert Number to Binary
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

//  =========================== Binary arithmetic (I didnt know how to code it lol) ========================= 
unsigned int binaryAddition(std::string binary1, std::string binary2) {
    unsigned int res = fromB10(binary1) + fromB10(binary2);
    return res;
}

unsigned int binarySubtraction(std::string binary1, std::string binary2) {
    // must binary1 >= binary2 (so no negatie numbers)
    if (fromB10(binary1) < fromB10(binary2)) {
        return 1;
    }
    unsigned int res = fromB10(binary1) - fromB10(binary2);
    return res;
}

unsigned int shiftRight(std::string binary) {
    binary.pop_back();
    return fromB10(binary);
}

unsigned int shiftLeft(std::string binary) {
    return fromB10(binary + '0');
}

int main(void) {
    std::string bin1Addition = "11";
    std::string bin2Addition = "111011101011";
    std::cout << "The addition of 111011101011 + " << bin1Addition << " is equal to " << binaryAddition("111011101011", bin1Addition) << std::endl;
    std::cout << "The addition of 111011101011 + " << bin2Addition << " is equal to " << binaryAddition("111011101011", bin2Addition) << std::endl;
    
    std::string bin1Subtraction = "11";
    std::string bin2Subtraction = "1110101";
    std::cout<< "The subtraction of 111011101011 - " << bin1Subtraction << " is equal to " << binarySubtraction("111011101011", bin2Subtraction) << std::endl;
    std::cout<< "The subtraction of 111011101011 - " << bin1Subtraction << " is equal to " << binarySubtraction("111011101011", bin2Subtraction) << std::endl;

    std::string sRight = "111011101011"; // divide by 2 (floored)
    std::cout << "The binary number: " << sRight << ", aka: " << fromB10(sRight) << " shifted right is now: " << shiftRight(sRight) << std::endl;

    std::string sLeft = "111011101011"; // multiply by 2
    std::cout << "The binary number: " << sLeft << ", aka: " << fromB10(sLeft) << " shifted left is now: " << shiftLeft(sLeft) << std::endl;



    return 0;

}