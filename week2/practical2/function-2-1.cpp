#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>

void print_binary_str(std::string decimal_number) {
    if (decimal_number.size() < 1 || decimal_number.size() > 9) {
        return;
    }
    int val = std::stoi(decimal_number);
    std::string res = "";
    while (val != 0) {
        res += std::to_string(val % 2);
        val /= 2;
    }
    std::reverse(res.begin(), res.end());
    std::cout << res << std::endl;
    return;
}