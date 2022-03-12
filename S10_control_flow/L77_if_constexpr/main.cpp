#include <iostream>

int main (){

    constexpr bool condition { true };

    if constexpr (condition){   // evaluated at compile time
        std::cout << std::boolalpha << condition << std::endl;
    }else{
        std::cout << "do nothing" << std::endl;
    }

    return 0;
}