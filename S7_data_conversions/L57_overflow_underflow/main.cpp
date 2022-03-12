#include <iostream>

int main (){

    // overflow
    unsigned char data {252};       // max value: 255

    std::cout << "data: " << static_cast<int>(++data) << std::endl;
    std::cout << "data: " << static_cast<int>(++data) << std::endl;
    std::cout << "data: " << static_cast<int>(++data) << std::endl;
    std::cout << "data: " << static_cast<int>(++data) << std::endl;
    std::cout << "data: " << static_cast<int>(++data) << std::endl;
    std::cout << "data: " << static_cast<int>(++data) << std::endl;

    std::cout << "=============" << std::endl;

    // underflow
    data = 3;                       // min value: 0
    std::cout << "data: " << static_cast<int>(--data) << std::endl;
    std::cout << "data: " << static_cast<int>(--data) << std::endl;
    std::cout << "data: " << static_cast<int>(--data) << std::endl;
    std::cout << "data: " << static_cast<int>(--data) << std::endl;
    std::cout << "data: " << static_cast<int>(--data) << std::endl;
    std::cout << "data: " << static_cast<int>(--data) << std::endl;

    return 0;
}