
#include <math.h>
#include <string>

// Convert bin to int
int fromB10(std::string binary) {
    int res = 0;
    for (int i = binary.size()-1; i >= 0; i--) {
        if (binary[i] == '1') {
            res += pow(2, binary.size()-i-1);   
        } else if (binary[i] != '0') {
            return 0; // invalid string
        }
    }
    return res; 
}

int binary_to_int(int binary_digits[], int number_of_digits) {
    // create a string from array
    std::string s = "";
    for (int i = 0; i < number_of_digits; i++) {
        s += binary_digits[i] + '0'; // convert integers to chars. Problem states binary_digits[i] is either 1 or 0
    }

    // edge
    if (s.size() == 0) {
        return 0;
    }
    return fromB10(s);
}