#include <iostream>

int main (){
    
    // infinite for loop
   for(size_t i{};true ; ++i){
       std::cout << "pog#" << i << std::endl;
   }
   

    // infinite while loop
    size_t i{0};
    while(true){
        std::cout << "pog#" << i << std::endl;
        ++i;
    }


    // infinite do while loop
    i = 0;
    do{
        std::cout << "pog#" << i << std::endl;
        ++i;
    }while(true);

    // ctrl+c in terminal to terminate program

    return 0;
}