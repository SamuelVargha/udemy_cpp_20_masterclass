#include <iostream>

int main (){

    int* p_num1 {new int{67}};
    int number {55};

    p_num1 = &number;    // now p_num has lost access to previous address => memory leak

    /* ================================= */

    int* p_num2 {new int{55}};
    p_num1 = new int{34};   // lost access to old memory => memory leak

    delete p_num1;
    delete p_num2;
    p_num1 = nullptr;
    p_num2 = nullptr;

    // nested scopes with dynamically allocated memory
    {
        int* p_num3 = {new int{12}};
    } 
    // memory with int{12} leaked

    //delete p_num3     // cant call delete outside of scope

    return 0;
}