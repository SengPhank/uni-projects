#include "Asset.h"

/* Private */
    // int value;
    // std::string product_type;

Asset::Asset() {
    /*The default constructor should set the type of asset to the empty string "" and  the value of the asset to zero.*/
    this->value = 0;
    this->product_type = "";
}

Asset::Asset(int val, std::string pt) {
    this->value = val;
    this->product_type = pt;
}     

std::string Asset::get_product_type(){// returns the financial asset type 
    return this->product_type;
}
int Asset::get_value() { // returns the the value of asset
    return this->value;
}                   

