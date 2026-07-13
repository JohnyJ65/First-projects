#include <iostream>
#include <string>
#include <limits>
#include "inventory.h"

Items translator(std::string selection);

std::string getInput (){
    std::cout << "Enter your selection: ";
    std::string x;
    std::getline(std::cin, x);
    for (char& c : x) {
    c = std::tolower(c);
}
    return x;
}


char getInputChar (){
    std::cout << "Enter your selection: ";
    char x{};
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    x = std::tolower(x);
    return x;
}

void printInventory (std::vector<std::string> a){
        for (const auto& i : a){
            std::cout << i << " ";
        }
    }

void printOptions (){
        std::cout << "Sword: 50 | Healing Potion 20 | Gun: 90 | Shield 55 | Laser 190 | Helmet 40 | Speed Potion 45 | Spear 60 |\n";
}

int main(){
    std::cout << " You have 300 coins. What would you like to purchase as your first weapon?\n";
    printOptions ();
    Inventory inventory ({"",0},{"",0},{},500);
   
    inventory.addWeapon1 (translator(getInput()));
    std::cout << "Great choice. Your current balance is " << inventory.printCoins() <<". Now select Weapon 2.\n";
    printOptions();

    inventory.addWeapon2 (translator(getInput()));
    std::cout << "Great choice. Your current balance is " << inventory.printCoins() <<". Now select the rest of your inventory.\n";

    char x = ' ';
    do {
        printOptions();
        inventory.addToInventory(translator(getInput()));
        std::cout << "Your current balance is " << inventory.printCoins() << ". Would you like to keep shopping? Enter y/n\n";

        x= getInputChar ();
    
    } while (x=='y');
    
    std::cout << "Would you like to refund anything? Enter y/n\n";
    char a {getInputChar()};
    if (a=='y'){
        std::cout << "What would you like to refund? Weapon 1, Weapon 2, or an inventory item?\n";
        std::string choice{ getInput ()};
        if (choice == "weapon 1")
            inventory.removeWeapon1(translator(inventory.getWeapon1()));
        if (choice == "weapon 2")
            inventory.removeWeapon2(translator(inventory.getWeapon2()));
        if (choice == "inventory") {
            std::cout << "What would you like to refund from your inventory?\n";
            inventory.removeFromInventory (translator(getInput()));
        }
    }

    std::cout << "Thanks for shopping! Your final balance was " << inventory.printCoins() << " and your total inventory is: \n";
    std::cout << "Weapon 1: " << inventory.getWeapon1() << '\n';
    std::cout << "Weapon 2: " << inventory.getWeapon2()<< '\n';
    std::cout << "Inventory: ";
    printInventory(inventory.getInventory());
    std::cout <<'\n';
}