#include <iostream>

int main (){
    
    for ( unsigned int i {0} ; i < 10 ; ++i){
        // whatever we want the loop to execute
        std::cout << "day" << i << ": i HATE c++" << std::endl;
    }
    //std::cout << "day" << i << "alr finee its not so bad" << std::endl; // i is not in scope here
    std::cout << "alr finee its not so bad" << std::endl;

    // using size_t
    for(size_t i {10} ; i < 21 ; ++i){
        std::cout << "day" << i << ": c++ is ok" << std::endl;
    }
    std::cout << "what is this??? FUCK c++" << std::endl;

    std::cout << "=============" << std::endl;
    std::cout << "sizeof(size_t) = " << sizeof(size_t) << std::endl;
    std::cout << "=============" << std::endl;

    // iterator declared outside of the loop
    size_t i = 20;
    for( i ; i < 31 ; ++i){
        std::cout << "day" << i << ": c++ ??" << std::endl;
    }
    std::cout << "day" << i << ": im just confused :sob:" << std::endl;

    // using variable
    const size_t COUNT {41};
    i = 30;

    for( i ; i < COUNT ; ++i){
        std::cout << "day" << i << ": *doesnt give a f, just codes*" << std::endl;
    }
    std::cout << "day" << i << ": *doesnt give a f, just codes forever*" << std::endl;


    return 0;
}