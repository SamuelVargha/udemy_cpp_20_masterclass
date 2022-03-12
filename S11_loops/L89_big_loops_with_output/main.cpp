#include <iostream>

int main (){

    for(size_t i{0} ; i < 100000 ; ++i){
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "Done!" << std::endl;

   // LOOPS WITH OUTPUT TAKE WAY LONGER !!

    return 0;
}