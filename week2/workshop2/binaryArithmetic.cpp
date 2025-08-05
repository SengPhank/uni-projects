#include <iostream>
#include <string>

// Binary Addition, Binary Subtraction, Binary Multiplication
std::string binaryAddition(std::string binary1, std::string binary2) {
    // assume binary1 >= binary2
    for (int i = binary1.size()-1; i);
}

std::string binarySubtraction(std::string binary1, std::string binary2) {
    // assume binary1 >= binary2
    for (int i = binary1.size()-1; i);
}



int main(void) {
    std::string bin1Addition = "11";
    std::string bin2Addition = "111011101011";
    std::cout << "The addition of 111011101011 + " << bin1Addition << " is equal to " << binaryAddition("111011101011", bin1Addition);
    std::cout << "The addition of 111011101011 + " << bin2Addition << " is equal to " << binaryAddition("111011101011", bin2Addition);
    
    std::string bin1Subtraction = "11";
    std::string bin2Subtraction = "1110101";
    std::cout<< "The subtraction of 111011101011 - " << bin1Subtraction << " is equal to " << binarySubtraction("111011101011", bin2Subtraction);
    std::cout<< "The subtraction of 111011101011 - " << bin1Subtraction << " is equal to " << binarySubtraction("111011101011", bin2Subtraction);

    // other

}