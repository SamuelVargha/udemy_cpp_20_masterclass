#include <iostream>

int global_var1{23}; // global variable

void some_function(){
    int local_var{10};
    std::cout << "inside function global_var: " << global_var1 << std::endl;
    std::cout << "inside functoin local_var: " << local_var << std::endl;
}

void some_other_function(){
    //local_var = 5; // cant mention local_var here
}

int main (){
    
    std::cout << "inside main function global_var: " << global_var1 << std::endl;

    //local_var = 23; // cant menion local_var here

    return 0;
}