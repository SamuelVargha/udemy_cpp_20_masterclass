#include <iostream>

int main (){

    int var1 {33};
    int* pointer1  = &var1;             // non const pointer to int
    const int* pointer2 = &var1;        // pointer to const
    const int* const pointer3 = &var1;  // const pointer to const data
    int* const pointer4 = &var1;        // cons pointer to non const data

    // if const on the left of * => data is const
    // if const on the right of * => pointer is const


    return 0;
}