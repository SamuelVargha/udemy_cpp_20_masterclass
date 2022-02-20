#include <iostream>
#include <string>

int main (){

    //Printing data
    std::cout << "Hello C++20 " << std::endl;

    int age1{21};
    std::cout << "Age : " << age1 << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message: Something happened" << std::endl;

    //Entering data
    int age2;
    std::string name;
    std::cout << "Please type your name and age :" << std::endl;

    //std::cin >> name;
    //std::cin >> age1;

    std::cin >> name >> age2;
    std::cout << "Hello " << name << ", " << age2  << "y/o" << std::endl;

    //Entering data with spaces
    std::string fullName;
    int age3;

    std::cout << "Please type your FULL name and age :" << std::endl;

    std::cin.ignore(); //when getline is used after other inputs
    std::getline(std::cin, fullName);
    std::cin >> age3;

    std::cout << "Hello " << fullName << ", " << age3  << "y/o" << std::endl;

    return 0;
}