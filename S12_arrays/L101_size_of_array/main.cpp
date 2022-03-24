#include <iostream>

int main (){
    
    int scores [] {1,2,3,4,5,6,7,8,9,10,11,12};

    // std::size()
    int scoresSize{std::size(scores)};
    
    for(size_t i {0}; i < scoresSize; i++){
        std::cout << "scores[" << i  << "]: " << scores[i] << std::endl;
    }

    std::cout << "==============" << std::endl;
    
    int tries[] {1,5,8};

    // before c++17
    int triesSize = sizeof(tries) / sizeof(tries[0]);

    for(size_t i {0}; i < triesSize; i++){
        std::cout << "tries[" << i  << "]: " << tries[i] << std::endl;
    }

    return 0;
}