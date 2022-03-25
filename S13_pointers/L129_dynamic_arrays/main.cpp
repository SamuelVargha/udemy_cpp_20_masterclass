#include <iostream>

int main (){

    size_t size{10};
    // create dynamically allocated array (undefined values)
    double* salaries {new double[size]};            
    
    // create dynamic array, all values initialized to 0
    int* students {new(std::nothrow) int[size]{}};  

    // create dynamic array and initialize 5 values. rest is 0
    double *scores {new(std::nothrow) double[size]{1,2,3,4,5}};


    if(scores){     // check if isnt null
        std::cout << "size of scores (regular pointer): " << sizeof(scores) << std::endl;

        // print out elements (cannot use range based loops with dynamic arrays)
        for(size_t i{}; i < size; ++i){
            std::cout << "value: " << scores[i] << std::endl;
        }
    }

    // release memory
    delete[] salaries;
    delete[] students;
    delete[] scores;

    // reset pointers
    salaries = nullptr;
    students = nullptr;
    scores = nullptr;

    return 0;
}