#include <iostream>

int main (){

    double w {0}, l {0}, h {0};
    std::cout << "Welcome to box calculator. Please type in the length, width and height information:" << std::endl;
    std::cout << "length: ";
    std::cin >> l;
    std::cout << "width: ";
    std::cin >> w;
    std::cout << "height: ";
    std::cin >> h;
    std::cout << "The base area is: " << w * l << std::endl;
    std::cout << "The volume is: " << w * l * h << std::endl;

    return 0;
}