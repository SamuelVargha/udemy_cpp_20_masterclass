#include <iostream>

int main (){

    int scores[10] {11,12,13,14,15,16,17,18,19,20};

    int* pointer1 {scores + 0};         // int* pointer1 {&scores[0]}
    int* pointer2 {scores + 8};         // int* pointer2 {&scores[8]}

    std::cout << "pointer2 - pointer1: " << pointer2 - pointer1 << std::endl;
    std::cout << "pointer1 - pointer2: " << pointer1 - pointer2 << std::endl;

    std::ptrdiff_t posdiff = pointer2 - pointer1;
    std::ptrdiff_t negdiff = pointer1 - pointer2;

    std::cout << "posdiff: " << posdiff << std::endl;
    std::cout << "negdiff: " << negdiff << std::endl;
    std::cout << "sizeof(ptrdiff_t): " << sizeof(std::ptrdiff_t) << std::endl;

    return 0;
}