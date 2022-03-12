#include <iostream>

int main (){

    bool green_light{true};
    bool red_light{false};

    if(red_light == true){
        std::cout << "stop!" << std::endl;
    }else{
        std::cout << "go !!" << std::endl;
    }

    if(green_light) {
        std::cout << "light is green" << std::endl;
    }else{
        std::cout << "aint no green shit round here" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    std::cout << "---------------------" << std::endl;

    //printing out bools: 1 = true | 2 = false
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    std::cout << "---------------------" << std::endl;

    std::cout << std::boolalpha;

    //now: printing out bools: true = true | false = false
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    std::cout << "---------------------" << std::endl;


    return 0;
}