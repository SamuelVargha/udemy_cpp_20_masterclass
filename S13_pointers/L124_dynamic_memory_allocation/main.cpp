#include <iostream>

int main (){

    int *p_number1 {nullptr};
    p_number1 = new int;        // dynamically allocate space for a single int on the heap
    *p_number1 = 77;            // write into dybamucally allocated memory

    std::cout << "dynamically allocating memory:" << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl;

    delete p_number1;           // return memory to the OS
    //*p_number = 45            // cannot assign here anymore
    p_number1 = nullptr;        // good practice: reset pointer

    // now we can reuse the pointer
    p_number1 = new int(-23);
    std::cout << "*p_number1: " << *p_number1 << std::endl;

    // need to release memory agane
    delete p_number1;
    p_number1 = nullptr;

    // do NOT call delete TWICE on a pointer !!!
    //delete p_number1;
    //delete p_number1;

    return 0;
}