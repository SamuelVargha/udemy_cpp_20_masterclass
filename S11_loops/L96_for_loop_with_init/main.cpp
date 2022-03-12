#include <iostream>

int main (){
    
    double multiplier {7};
    for( auto i : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << "result = " << ( i ) * multiplier << std::endl;
    }

    std::cout << "===================" << std::endl;

    // initializing inside for loop (scope is inside loop)
    for(double multiplier {2}; auto i : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << "result = " << ( i ) * multiplier << std::endl;
    }

    std::cout << "multiplier (main funciton scope) = " << multiplier << std::endl;

    return 0;
}