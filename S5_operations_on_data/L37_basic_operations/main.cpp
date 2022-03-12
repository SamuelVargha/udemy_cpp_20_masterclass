#include <iostream>

int main (){

    //addition
    int number1 {2};
    int number2 {7};

    int result = number1 + number2;
    std::cout << "result: " << result << std::endl;

    //subtraction
    result = number1 - number2;
    std::cout << "result: " << result << std::endl;

    //multiplication
    result = number1 * number2;
    std::cout << "result: " << result << std::endl;

    //integer division
    result = number2 / number1;
    std::cout << "result: " << result << std::endl;

    //modulus
    result = number2 % number1;
    std::cout << "result: " << result << std::endl;

    return 0;
}