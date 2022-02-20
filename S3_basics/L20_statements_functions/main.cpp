#include <iostream>

//function
int addNums(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}

int multiplyNums(int firstNumber, int secondNumber){
    return firstNumber * secondNumber;
}

int main (){

    int firstNumber {13}; //statement
    int secondNumber {7};

    std::cout << "First number: " << firstNumber << std::endl;
    std::cout << "Second number: " << secondNumber << std::endl;

    int sum = addNums(firstNumber, secondNumber);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNums(30, 54);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNums(53, 3) << std::endl;

    std::cout << "Sum: " << multiplyNums(firstNumber, secondNumber) << std::endl;

    return 0;
}