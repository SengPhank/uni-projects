#include <iostream>
#include "Asset.h"

int main(void) {
    // Create new class tests
    Asset d1;
    Asset d2 = {10, "Car"};
    Asset d3 = {-19, "House"};

    std::cout << "Default: Price [" << d1.get_value() << "], Name: " << d1.get_product_type() << std::endl; 
    std::cout << "D2: Price [" << d2.get_value() << "], Name: " << d2.get_product_type() << std::endl; 
    std::cout << "D3: Price [" << d3.get_value() << "], Name: " << d3.get_product_type() << std::endl; 
    return 0;
}