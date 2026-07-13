#include "items.h"
Items sword {"sword", 50};
Items healing_potion {"Healing Potion", 20};
Items gun {"Gun", 90};
Items shield {"shield", 55};
Items laser {"laser", 190};
Items helmet {"helmet", 40};
Items speed_potion {"Speed Potion", 45};
Items spear {"spear", 60};  

Items translator (std::string selection){
    if (selection == "sword")
        return sword;
    if (selection == "healing potion")
        return healing_potion;
    if (selection == "gun")
        return gun;
    if (selection == "shield")
        return shield;
    if (selection == "laser")
        return laser;
    if (selection == "helmet")
        return helmet;
    if (selection == "speed potion")
        return speed_potion;
    if (selection == "spear")
        return spear;
}
