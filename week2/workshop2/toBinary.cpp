// Convert integer to binary
#include <iostream>
#include <string>
#include <algorithm>

std::string toBinary(int value) {
    std::string res = "";
    while (value != 0) {
        res += std::to_string(value % 2);
        value /= 2; 
    }

    std::reverse(res.begin(), res.end());
    return res;
}

int main(void) {
    int x = 75;
    std::cout << "The value " << x << " in binary is: " << toBinary(x) << std::endl;

    return 0;
}