#include <iostream>

int main (){
    
    /* <==== 0 = false | anything other than 0 = true ====> */

    int condition = -12;
    if(condition){
        std::cout << "true" << std::endl;
    }else{
        std::cout << "false" << std::endl;
    }

    return 0;
}