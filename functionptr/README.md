# Function Pointer Calculator

Overview:
This project is a simple C++ calculator that demonstrates how to use function pointers and std::function to select arithmetic operations at runtime. The user enters two integers and an operator, and the program chooses the correct function to perform the calculation.

# Features

Supports addition, subtraction, multiplication, and division

Uses a function pointer selector to map operators to functions

Uses std::function to call the selected operation

Includes helper functions for inputing integers and characters

# How It Works
The program defines four arithmetic functions: add, subtract, multiply, and divide.
Two input functions read an integer and a character from the user.
A selector function named retel returns a pointer to the correct arithmetic function based on the operator entered.
The calculate function uses std::function to call the selected operation.
The main function reads input, selects the correct function, performs the calculation, and prints the result.


# Compilation
g++ main.cpp -o calculator


How to run:
./calculator

# Notes

Division uses integer division.

Division  by 0 is handled.

This project is intended as a learning example for function pointers and std::function.
