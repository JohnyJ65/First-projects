#include <iostream>
/*
Class contains two integers and a char to hold operator, getters and setters,
 and a calculation function to decide which operatation to use.
*/
class Calculator {

private:

double num1 {};
double num2{};
char operators{};

public:

Calculator (double a, double b, char c)
 :  num1 {a},  num2{b}, operators {c}
{}

double getnum1 () {return num1;}
double getnum2 () {return num2;}
char getoperators () {return operators;}

void setnum1 (){
    double a;
    std::cout << "Enter a number: ";
std::cin >> a;
num1 =a; 
}
void setnum2 () {
    double a;
    std::cout << "Enter another number: ";
std::cin >> a;
while (operators == '/' && a ==0){
    std::cout << "Enter another number: ";
    std::cin >> a;
}
num2 =a; 
}
void setoperators (){char a;
    std::cout << "Enter an operator: ";
std::cin >> a;
operators =a; }

double calculation () {
switch (operators){
    case '+':
    return num1 + num2;
    case '-':
    return num1 - num2;
    case '*':
    return num1 * num2;
    case '/':
    return num1 / num2;
    default: 
    std::cout << "Error";
    return 0;
}
}
};


int main (){
    Calculator first (0,0,'+');

    first.setnum1();
    first.setoperators();
    first.setnum2();
    
    std::cout << first.calculation () << "\n";
    return 0;
}
