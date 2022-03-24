#include <iostream>

int main (){
    
    // declare and initialize pointer
    int *p_num {};              // will be initialized with nullptr
    double *p_fract_num {};     // also initialized with nullptr

    /* equivalent:
       int *p_num {nullptr}
       int *p_fract_num {nullptr} */

    // initializing pointers and assigning data
    int intvar1 {43};
    int *p_int1{&intvar1};    // & => passes the address of operand

    std::cout << "intvar1: " << intvar1 << std::endl;
    std::cout << "p_int1 (address in memory): " << p_int1 << std::endl;

    int intvar2 {35};
    p_int1 = &intvar2;        // assign different address to pointer
    std::cout << "p_int1: " << p_int1 << std::endl;

    // cant cross assign between pointers of different types
    int *p_int2 {nullptr};
    double doublevar1 {33};

    //p_int2 = &doublevar1;   // illegal in c++

    // dereferencing a pointer
    int *p_int3 {nullptr};
    int data = 372;

    p_int3 = &data;
    std::cout << "data = " << *p_int3 << std::endl;     // *pointer => dereference



    return 0;
}