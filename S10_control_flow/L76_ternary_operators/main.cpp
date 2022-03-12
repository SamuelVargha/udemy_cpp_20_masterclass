#include <iostream>
#include <string>

int main (){
    
    std::string uGood;
    int happyPoints = 82;
    int sadPoints = 28;

    uGood = (happyPoints >= sadPoints)? "yeah" : "nah man";

    std::cout << "u good? " << std::endl << uGood << std::endl;

    bool replyCheck = (uGood.compare("nah man"))? true : false;

    if(replyCheck){
        std::cout << "POGU" << std::endl;
    }else{
        std::cout << "sadge" << std::endl;
    }


    return 0;
}