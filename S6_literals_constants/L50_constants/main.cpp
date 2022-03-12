#include <iostream>

int main (){
    
    //const int val;    // initialization needed
    const int age {13}; // initialized
    const float height {1.81f};

    //age = 55;         // cant modify
    //height = 1.8f     // cant modify

    int mumAge = { 3 * age };

    std::cout << "age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;
    std::cout << "mumAge: " << mumAge << std::endl;

    return 0;
}