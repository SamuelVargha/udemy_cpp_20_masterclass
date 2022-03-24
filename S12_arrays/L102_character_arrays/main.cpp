#include <iostream>

int main (){
    
    // declare array
    char msgOne[3] {'h', 'i', 'i'};

    // print array through looping
    std::cout << "message: ";
    for(auto c : msgOne){
        std::cout << c;
    }
    std::cout << std::endl;

    // change characters in array
    msgOne[2] = '!';

    std::cout << "message: ";
    for(auto c : msgOne){
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "============" << std::endl;

    // when not terminated => prints garbage    ( null character: '\0' )
    std::cout << "message: " << msgOne << std::endl;

    std::cout << "============" << std::endl;

    char msgTwo[4] {'h', 'i', 'i'};    // char message[] {'h', 'i', 'i', '\0'};

    // with null terminator, array prints correctly
    std::cout << "message: " << msgTwo << std::endl;

    std::cout << "============" << std::endl;

    // without specified elements, does not terminate with null character
    char msgThree[] {'h', 'i', '!'};

    // not jull terminated => will print garbage
    std::cout << "message: " << msgThree << std::endl;

    std::cout << "============" << std::endl;

    // string literal
    char msgFour[] {"hii"};     // will be null terminated
    std::cout << "message: " << msgFour << std::endl;  // will print correctly

    std::cout << "============" << std::endl;

    char msgFive[] {"hi !!"};   // can use spaces in string literals
    std::cout << "message: " << msgFive << std::endl;

    return 0;
}