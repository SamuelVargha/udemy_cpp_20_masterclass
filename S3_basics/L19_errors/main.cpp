#include <iostream>

int main (){
    
    //compiler error
    std::cout << "Hello World!!" << std::endl;

    //warning
    int value = 7 / 0;

    //runtime error
    std::cout << "value: " << value << std::endl;
    return 0;
}