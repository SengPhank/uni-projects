#include <iostream>
#include "Asset.h"
#include "AssetPortfolio.h"

int main(void) {
    // Create new class tests
    AssetPortfolio defaultCon;
    std::cout << "Default: [Current size of Portfolio]: " << defaultCon.get_num_assets()
    << "\n[Has 'Car' as asset]: " << defaultCon.has_asset("Car") << std::endl;
    Asset newHouse(100, "House");
    std::cout << "Attempting to add new asset: " << defaultCon.add_asset(newHouse) << std::endl;
    std::cout << "Has 'House' as an asset? " << defaultCon.has_asset("House") << std::endl;

    AssetPortfolio con1(3);
    std::cout << "Con1: [Current size of Portfolio]: " << con1.get_num_assets()
    << "\n[Has 'Car' as asset]: " << con1.has_asset("Car") << std::endl;
    Asset newCar(69, "Car");
    std::cout << "Attempting to add new asset: " << con1.add_asset(newCar) << std::endl;
    std::cout << "Has 'Car' as an asset? " << con1.has_asset("Car") << std::endl;
    Asset newBoat(10, "Boat");
    std::cout << "Attempting to add new asset: " << con1.add_asset(newBoat) << std::endl;
    Asset newWife(-1000, "Partner");
    std::cout << "Attempting to add new asset: " << con1.add_asset(newWife) << std::endl;
    Asset newFridge(0, "Fridge");
    std::cout << "Attempting to add new asset: " << con1.add_asset(newFridge) << std::endl;

    std::cout << "Printing all assets: " << std::endl;
    for (int i = 0; i < con1.get_num_assets(); i++) {
        std::cout << con1.get_assets()[i].get_product_type() << " : " << con1.get_assets()[i].get_value() << std::endl;
    }

    
    return 0;
}