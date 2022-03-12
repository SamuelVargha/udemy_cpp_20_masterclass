#include <iostream>

int main (){

    constexpr int SOME_LIB_MAJOR_VER {123};
    constexpr int eye_count {2};
    constexpr double PI {3.14};

    //eye_count = 4  // constexpr = const: cannot assign

    std::cout << "eye_count: " << eye_count << std::endl;
    std::cout << "PI: " << PI << std::endl;

    int leg_count {2};
    //constexpr int arm_count {leg_count} 
    /* error (cant initialize const var with runtime var) */

    constexpr int room_count {10};
    constexpr int door_count {room_count}; // OK

    static_assert ( SOME_LIB_MAJOR_VER == 123 ); // if test fails => compiler error
    std::cout << "worked" << std::endl;

    int age = 5;
    //static_assert ( age == 3 ); // cannot use runtime variable in static_assert check

    return 0;
}