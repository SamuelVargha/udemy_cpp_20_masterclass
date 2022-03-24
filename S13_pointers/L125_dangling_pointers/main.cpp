#include <iostream>

/* DANGLING POINTERS LEAD TO UNDEFINED BEHAVIOUR */

int main (){

    // case1: uninitialized pointer
    //int* ptr1;      // dangling uninitialized pointer

    // solution:
    int* ptr1 {};     // initialized pointer with nullptr

    /* ========================================== */

    // case2: deleted pointer
    /*  
    int* ptr2 {new int{32}};
    
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    delete ptr2;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    */

   // solution:
   int* ptr2 {new int{32}};
    
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    delete ptr2;
    ptr2 = nullptr;

    if(ptr2 != nullptr){
        std::cout << "*ptr2: " << *ptr2 << std::endl;
    }else{
        std::cout << "invalid address" << std::endl;
    }


   /* ========================================== */

   // case3: multiple pointers pointing to the same address
   /*
   int *ptr3 {new int{83}};
   int *ptr4 {ptr3};

   std::cout << "ptr3: " << ptr3 << " | ptr4: " << ptr4 << std::endl;
   delete ptr3;
   std::cout << "ptr4: " << ptr4 << std::endl;
   */

  // solution:
    int *ptr3 {new int{83}};
    int *ptr4 {ptr3};

    std::cout << "*ptr3: " << *ptr3 << " | *ptr4: " << *ptr4 << std::endl;
    delete ptr3;
    ptr3 = nullptr;

    // check against nullptr in the main pointer OR dont have multiple pointers to same address
    if(ptr3 != nullptr){
        std::cout << "*ptr4: " << *ptr4 << std::endl;
    }

    return 0;
}