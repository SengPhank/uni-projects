#include <string>
#include "Asset.h"
#include "AssetPortfolio.h"
// private: 
//     int maxAss;
//     Asset* heapOfAss;
//     int numOfAss;

AssetPortfolio::AssetPortfolio() { // default constructor capacity of zero assets
    // The default AssetPortfolio size is 0.
    this->maxAss = 0;
    this->heapOfAss = nullptr;
    this->numOfAss = 0;
}           
AssetPortfolio::AssetPortfolio(int size) {   // constructor for a portfolio of given size
    this->maxAss = size;
    this->heapOfAss = new Asset[size];
    this->numOfAss = 0;
}

// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets() {
    return this->numOfAss;
}

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool AssetPortfolio::has_asset(std::string product) {
    for (int i = 0; i < this->numOfAss; i++) {
        if (this->heapOfAss[i].get_product_type() == product) {
            return true;
        }
    }
    return false;
}

Asset* AssetPortfolio::get_assets(){       // returns the array of assets of the portfolio
    return this->heapOfAss;
}
// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset) {
    if (this->numOfAss >= this->maxAss) { return false; }
    this->heapOfAss[this->numOfAss++] = new_asset;
    return true;
}

AssetPortfolio::~AssetPortfolio() { // destructor
    delete[] this->heapOfAss;
}  
