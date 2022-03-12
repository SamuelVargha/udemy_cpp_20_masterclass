#include <iostream>

int main (){

    int intVal {123}; // declare and initialize
    std::cout << "intVal: " << intVal << std::endl;

    intVal = 55; // assign
    std::cout << "intVal: " << intVal << std::endl;

    double doubleVal {42.55}; // declare and initialize
    std::cout << "doubleVal: " << doubleVal << std::endl;

    doubleVal = 99.99; // assign
    std::cout << "doubleVal: " << doubleVal << std::endl;

    bool boolVal {false}; // declare and initalize
    std::cout << "boolVal: " << boolVal << std::endl; // 0 = false

    boolVal = true; // assign
    std::cout << "boolVal: " << boolVal << std::endl; // 1 = true

    // auto type deduction - CAREFUL
    auto autoVal {333u}; // declare and initialize with type deduction

    autoVal = -22; // assign negative number to unsigned int - DANGER
    std::cout << "autoVal: " << autoVal << std::endl;

    return 0;
}