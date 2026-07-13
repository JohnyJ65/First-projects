#include <iostream>
#include <functional>

// Arithmetic functions

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}


// Input functions, for the numbers and intergers

int getInput (){
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}
char getInputChar (){
    char x;
    std::cout << "Enter an operator: ";
    std::cin >> x;
    return x;
}

// Select the correct operatation via switch statment, then use function ptr to call correct function.

int (*retel(char z))(int, int){
    switch (z){
    case '+':
    return add;
    case '-':
    return subtract;
    case '*':
    return multiply;
    case '/':
    return divide;
    default:
    return nullptr;
    
}
}


// Calls the given function 'look' with x and y, and returns the result.

int calculate (int x, int y, std::function<int(int,int)> look){
    int result = look(x,y);
    return result;
}


int main (){
int x {getInput()};
char z {getInputChar()};
int y {getInput()};

while (y==0 && z == '/'){
        y =getInput();
    }
std::cout << calculate(x,y,retel (z)) << '\n';
}