#include <iostream>
#include <ctime>

int main (){
    
    // adding seed for number generation to be random across program runs
    std::srand(std::time(0));

    int randomNum = std::rand();
    std::cout << "randomNum = " << randomNum << std::endl;  // betweem 1 and RAND_MAX

    std::cout << "==============" << std::endl;

    for(size_t i {0}; i < 4; ++i){
        randomNum = std::rand();
        std::cout << "randomNum#" << i << " = " << randomNum << std::endl;
    }

    std::cout << "==============" << std::endl;

    randomNum = std::rand() % 11;       // between 0 and 10 inclusive

    for(size_t i {0}; i < 4; ++i){
        randomNum = (std::rand() % 10) + 1;     // between 1 and 10 inclusive
        std::cout << "randomNum#" << i << " = " << randomNum << std::endl;
    }

    return 0;
}