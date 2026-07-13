#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <algorithm>
#include "items.h" 

class Inventory{
private:
    std::string weapon1 {};
    std::string weapon2 {};
    std::vector<std::string> inventory {};
    int coins{};

public:
    Inventory (Items x, Items y, const std::vector<std::string>& z, int b )
    : 
    weapon1( x.name),  weapon2(y.name), inventory(z),  coins {b}
    {
    }
    void addWeapon1 (Items x){
        weapon1 = x.name;
        coins = coins - x.price;
    }
    void addWeapon2 (Items x){
        weapon2 = x.name;
        coins = coins - x.price;
    }
    void removeWeapon1 (Items x) {
        weapon1="";
        coins = coins + x.price;
    }
   void removeWeapon2 (Items x) {
        weapon2="";
        coins = coins + x.price;
    }
    void addToInventory (Items x){
        inventory.push_back(x.name);
        coins = coins - x.price;
    }
    void removeFromInventory (Items x) {
        inventory.erase(
    std::remove(inventory.begin(), inventory.end(), x.name),
    inventory.end());
    coins = coins + x.price;
    }
    int printCoins(){return coins;}
    std::string getWeapon1 (){return weapon1;}
    std::string getWeapon2 (){return weapon2;}
    std::vector<std::string> getInventory (){return inventory;}
};
