#include <iostream>

int main (){

    int* ptr {};
    
    if(ptr){    // equivalent to if(ptr == nullptr)
        std::cout << "ptr is null" << std::endl;
    }else{
        std::cout << "ptr is not null" << std::endl;
    }

    // we CAN call delete on a pointer even if it is NULL
    delete ptr;

    return 0;
}