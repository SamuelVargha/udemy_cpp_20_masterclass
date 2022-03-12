#include <iostream>

int main (){
    
    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10};    // collection of integers

    
    for( size_t i {0}; i < 10; ++i ){
        std::cout << "value: " << bag_of_values[i] << std::endl;
    }

    std::cout << "===============" << std::endl;

    // equivalent
    for( int value : bag_of_values ){
        // value holds a copy of the current iterstion in the whole bag
        std::cout << "value: " << value << std::endl;
    }

    std::cout << "===============" << std::endl;

    // speicfy collection in loop
    for( int value : {1,2,3,4,5,6,7,8,9,10} ){
        std::cout << "value: " << value << std::endl;
    }

    std::cout << "===============" << std::endl;

    // speicfy collection in loop with auto
    for( auto value : {1,2,3,4,5,6,7,8,9,10} ){
        std::cout << "value: " << value << std::endl;
    }

    return 0;
}