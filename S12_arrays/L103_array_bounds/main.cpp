#include <iostream>

int main (){
    
    int numbers[] {1,2,3,4,5,6,7,8,9,0};

    // read beyond bounds: UNDEFINED BEHAVIOUR !!!
    std::cout << "numbers[12]: " << numbers[12] << std::endl;

    // VERY BAD => do NOT try to modify array beyond its bounds
    numbers[432432] = 1000;
    std::cout << "numbers[12]: " << numbers[432432] << std::endl;

    return 0;
}