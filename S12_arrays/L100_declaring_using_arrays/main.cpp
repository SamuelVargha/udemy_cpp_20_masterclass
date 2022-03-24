#include <iostream>

int main (){
    
    // declare and initialize array of ints
    int scores[10] {1,2,3,4,5};     // rest is initialized to 0

    // read data from array
    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "scores[1]: " << scores[1] << std::endl;
    std::cout << "scores[5]: " << scores[5] << std::endl;
    std::cout << "scores[7]: " << scores[7] << std::endl;

    std::cout << "===========" << std::endl;

    // initialize data with loop
    for(size_t i {0}; i < 10; i++){
        scores[i] = i;
    }

    // read with loop
    for(size_t i {0}; i < 10; ++i){
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "===========" << std::endl;

    // declare and initialize array of doubles
    double salaries[5] {12/7, 7.5, 13.2, 8.1, 9.3};
    for(size_t i{0}; i < 5; ++i){
        std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
    }

    std::cout << "===========" << std::endl;

    const int birdIDs[] {1430, 1102, 2042, 4211, 5618};  // array initialize to 5 values
    for(int birdID : birdIDs){
        std::cout << "birdID: " << birdID << std::endl;
    }

    std::cout << "===========" << std::endl;

    // operations on array
    int sum = 0;
    int numbers[] {2, 3, -5, 10};
    for(int num : numbers){
        sum += num;
    }
    std::cout << "sum = " << sum << std::endl;

    return 0;
}