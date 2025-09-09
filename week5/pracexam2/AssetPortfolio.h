#pragma once
#include <string>
#include "Asset.h"
class AssetPortfolio {
    private: // I've shortened down "Asset" to make it easier for myself if you don't mind.
        int maxAss;
        Asset* heapOfAss;
        int numOfAss;
    public:
        AssetPortfolio();           // default constructor capacity of zero assets
        AssetPortfolio(int size);   // constructor for a portfolio of given size

        // returns the number of assets which are in the portfolio
        int get_num_assets(); 

        // returns true if any asset in the portfolio is of the specified product type
        // otherwise returns false
        bool has_asset(std::string product); 

        Asset *get_assets();       // returns the array of assets of the portfolio

        // returns true and adds new asset to the portfolio if the portfolio is not full
        // otherwise returns false
        bool add_asset(Asset new_asset);

        ~AssetPortfolio();  // destructor
};