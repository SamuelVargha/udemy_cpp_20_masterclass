#include <iostream>

int main (){
    
    const size_t COUNT {10};
    size_t i {0};

    while (i < COUNT){
        std::cout << i << " : i loooooooooove c++" << std::endl;
        ++i; // incrementation
    }
    std::cout << "i'm doooooooone loving c++" << std::endl;

    return 0;
}