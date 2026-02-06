#pragma once

#include <string>
class Asset
{
private:
    int value;
    std::string product_type;
public:
    Asset();
    Asset(int value, std::string product_type);      
    std::string get_product_type();    // returns the financial asset type 
    int get_value();                   // returns the the value of asset
};