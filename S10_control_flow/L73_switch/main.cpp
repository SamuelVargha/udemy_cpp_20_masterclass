#include <iostream>

int main (){
    
    const int pogu { 11 };
    const int pagman { 16 };
    const int lulw { 24 };
    const int pepeLaugh { 28 };
    const int monkaw { 32 };

    int emote = 24;

    switch(emote){
        case pogu : {
            std::cout << "POGU" << std::endl;
        }
        break;
        case pagman : {
            std::cout << "PAGMAN" << std::endl;
        }
        break;
        case lulw : {
            std::cout << "LULW" << std::endl;
        }
        break;
        case pepeLaugh : {
            std::cout << "PEPELAUGH" << std::endl;
        }
        break;
        case monkaw : {
            std::cout << "MONKAW" << std::endl;
        }
        break;
        default : {
            std::cout << "smile" << std::endl;
        }
        break;
    }

    return 0;
}