#include <iostream>

int main (){
    
    const unsigned int COUNT {11};
    unsigned int i {1};

    do{
        std::cout << "loop number = " << i << std::endl;
        ++i;
    }while(i < COUNT);

    return 0;
}