#include <iostream>

int main (){
    const size_t COUNT {13};

    // for loops
    std::cout << "===== first loop: =====" << std::endl;
    for ( size_t i {}; i < COUNT; ++i ){

        if(i == 10){
            break;
        }

        std::cout << "i: " << i << std::endl;
    }
    std::cout << "=== first loop done ===" << std::endl;

    std::cout << "===== second loop: =====" << std::endl;
    for ( size_t i {}; i < COUNT; ++i ){

        if(i == 10){
            continue;
        }

        std::cout << "i: " << i << std::endl;
    }
    std::cout << "=== second loop done ===" << std::endl;

    // while loops
    size_t i {0};

    std::cout << "===== third loop =====" << std::endl;
    while(i < COUNT){

        if(i == 5){
            ++i;
            continue;
        }
        if(i == 10){
            break;
        }

        std::cout << "i: " << i << std::endl;
        ++i;
    }
    std::cout << "=== third loop done ===" << std::endl;

    return 0;
}