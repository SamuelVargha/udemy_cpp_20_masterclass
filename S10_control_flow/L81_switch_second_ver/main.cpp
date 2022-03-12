#include <iostream>

int main (){

    int num = 0;
    std::cout << "enter number" << std::endl;
    std::cin >> num;

    switch (num){
        case 1:
            std::cout << "number one" << std::endl;
            break;
        case 2:
            std::cout << "number two" << std::endl;
            break;
        case 3:
            std::cout << "number three" << std::endl;
            break;
        case 4:
            std::cout << "number four" << std::endl;
            break;
        case 5:
            std::cout << "number five" << std::endl;
            break;
        default:
            std::cout << "something other than 1 or 2 or 3 or 4 or 5" <<std::endl;
            break;
    }

    return 0;
}