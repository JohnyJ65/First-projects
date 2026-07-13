# C++ OOP Calculator
A simple object‑oriented calculator written in C++.
This project demonstrates:

basic class design

constructors and private member variables

getters and setters

input validation (including division‑by‑zero handling)

a switch‑based calculation method

The program allows the user to enter two numbers and an operator, then performs the selected arithmetic operation.

# Features
Supports +, -, *, and /

Prevents division by zero

Uses a Calculator class with:

private data members (num1, num2, operators)

public setters and getters

a calculation() method that performs the correct operation

Clean and readable structure suitable for beginners learning OOP

# How It Works
A Calculator object is created with default values.

The user is prompted to enter:

the first number

an operator

the second number

If the operator is /, the program ensures the second number is not zero.

The calculation() method runs a switch statement to compute the result.

The result is printed to the console.
# How to Compile and Run
g++ main.cpp -o calculator
./calculator
