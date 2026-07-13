# Inventory System (C++ / Multi‑File Project)
A small RPG‑style inventory and shop system implemented in modern C++.
This project demonstrates multi‑file program structure, class design, state management, and user interaction through the console.
It is built using CMake and follows a clean header/source separation.

# Features
Item purchasing
The player starts with a fixed number of coins and can purchase:

Two main weapons

Additional inventory items

Items with different names and prices

Refund system
Players can refund:

Weapon 1

Weapon 2

Any inventory item

Refunding restores coins appropriately.

Inventory management

Items are stored in a std::vector<std::string>

Items can be added or removed

Duplicate items are allowed


Case‑insensitive item names handled

Basic validation for empty or invalid selections


The project is split into:

main.cpp — program flow and user interaction

items.cpp / items.h — item definitions and translator

inventory.h — inventory class and logic

CMakeLists.txt — build configuration


# How to Build
This project uses CMake, so it can be built on any system with a C++ compiler.

1. Create a build directory
Code
mkdir build
cd build
2. Generate build files
Code
cmake ..
3. Build the executable
Code
cmake --build .
4. Run the program
./Inventory

# How It Works
Item Translator
translator(std::string) converts user input into an Items struct containing:

name

price

This allows the program to map text input to real item data.

Inventory Class
Handles:

Adding/removing weapons

Adding/removing inventory items

Tracking coins

Returning current inventory state

Game Flow
Player chooses Weapon 1

Player chooses Weapon 2

Player buys additional items in a loop

Player optionally refunds items

Final inventory and coin balance are displayed

# Future Improvements 
Input validation for unknown items

Enum‑based item types

Save/load system

Item stats (damage, rarity, etc.)

Shop menus and categories