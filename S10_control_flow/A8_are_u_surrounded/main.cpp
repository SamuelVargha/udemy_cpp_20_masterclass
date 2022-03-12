#include <iostream>

int main (){

    int x = 0, y = 0;
    std::cout << "Type in your x location : " << std::endl;
    std::cin >> x;
    std::cout << "Type in your y location : " << std::endl;
    std::cin >> y;

    if( (x <= 10 && x >= -10) && (y <= 5 && y >= -5) ){
        std::cout << "You are completely surrounded. Don't move!" << std::endl;
    }else{
        std::cout << "You're out of reach!" << std::endl;
    }

    return 0;
}