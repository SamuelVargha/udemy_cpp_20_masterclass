#include <iostream>

int main (){
    
    const size_t COUNT {5};

    // for loops
	std::cout << "incrementing for loop:" << std::endl;
    for (size_t i{} ; i < COUNT ; ++i){
        std::cout << "i  : " << i << std::endl;
    }
	
	
	std::cout << std::endl;
	std::cout << "decrementing for loop:" << std::endl;
	
    for(size_t i{COUNT} ; i > 0 ; --i){
        std::cout << "i : " << i << std::endl;
    }

    // range based for loops can't be made to run in reverse order

    // while loop
	std::cout << std::endl;
	std::cout << "incrementing while:" << std::endl;
	
    size_t i{0};
    while( i < COUNT){
        std::cout << "i: " << i << std::endl;
        ++i;
    }
    
    // decrementing while
	std::cout << std::endl;
	std::cout << "decrementing while:" << std::endl;
    i = COUNT;
    
    while( i > 0){
        std::cout << "i: " << i << std::endl;
        --i;
    }


    // do while loop
    std::cout << std::endl;
	std::cout << "incrementing do while:" << std::endl;
    i = 0;
    
    do {
        std::cout << "i: " << i << std::endl;
        ++i;
        
    }while ( i < COUNT);
    
    
    // decrementing do while
	std::cout << std::endl;
	std::cout << "decrementing do while:" << std::endl;
    i = COUNT;
    
    do {
        std::cout << "i: " << i << std::endl;
        --i;
    }while ( i > 0);


    // infinite decrementing do while
	/*  std::cout << std::endl;
	    std::cout << "decrementing do while:" << std::endl;
        i = COUNT;
    
        do {
            std::cout << "i: " << i << std::endl;
            --i;
        }while ( i >= 0);        // !! i >=0 => UNDERFLOW !!  */

    return 0;
}