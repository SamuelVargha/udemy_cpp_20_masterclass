#include <iostream>

int main (){
    
    bool a { true };
    bool b { true };
    bool c { true };
    bool d { true };

    bool w{ false };
    bool x{ false };
    bool y{ false };
    bool z{ false };


    bool result = a && x && c && d;
    std::cout << "result: " << std::boolalpha << result << std::endl;

    result = a || x || c || d;
    std::cout << "result: " << std::boolalpha << result << std::endl;

    result = a && (b || x);
    std::cout << "result: " << std::boolalpha << result << std::endl;

    std::cout << "======" << std::endl;

    bool house { true }, spouse { false }, job { true };

    if(house && spouse && job){     // most important expressions first
        std::cout << "happy" << std::endl;
    }else{
        std::cout << "sad" << std::endl;
    }

    return 0;
}