#include <iostream>

/* NEW FAILING IS A VERY RARE CASE, BUT IT CAN HAPPEN */

int main (){

    // exception:
    try{
        int* data = new int[7429875987594];
    }catch(std::exception& ex){
        std::cout << "something went wrong: " << ex.what() << std::endl;
    }

    std::cout << "========================================" << std::endl;

    // std::nothrow
    int* data = new(std::nothrow) int[7429875987594];

    if(data == nullptr){
        std::cout << "something went wrong" << std::endl;
    }

    delete data;        // data is initialized to nullptr => we have to delete it

    return 0;
}