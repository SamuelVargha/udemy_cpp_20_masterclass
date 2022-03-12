#include <iostream>

int main (){

    // if with initializer      (can use only 1)
    bool go = false;

    if( double speed {10.38}; go ){
        std::cout << "speed: " << speed << std::endl;
    }else{
        std::cout << "speed: " << speed << std::endl;

        if(speed > 50){
            std::cout << "useless big speed" << std::endl;
        }else{
            std::cout << "useless smol speed" << std::endl;
        }
    }

    // switch with initializer  
    const int pagman = 12;
    const int lulw = 18;
    const int xqcl = 22;

    int emote = 22;

    switch(int combo {5}; emote){
        case pagman: {
            std::cout << "PAGMAN combo x" << combo << std::endl;
        }
        break;
        case lulw: {
            std::cout << "LULW combo x" << combo << std::endl;
        }
        break;
        case xqcl: {
            std::cout << "XQCL combo x" << combo << std::endl;
        }
        break;
    }

    return 0;
}