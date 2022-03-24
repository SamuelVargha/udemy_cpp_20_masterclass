#include <iostream>
#include <ctime>

int main (){
    
    std::srand(std::time(0));
    while(true){
        std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;

        int rnum1 = std::rand() % 200;
        int rnum2 = std::rand() % 200;
        int rChoice = (std::rand() % 3) + 1;
        int result = 0, userResult = 0;

        switch(rChoice){
            case 1:
                std::cout << "What's the result of " << rnum1 << " + " << rnum2 << " : ";
                result = rnum1 + rnum2;
                std::cin >> userResult;
                break;
            case 2:
                std::cout << "What's the result of " << rnum1 << " - " << rnum2 << " : ";
                result = rnum1 - rnum2;
                std::cin >> userResult;
                break;
            case 3:
                std::cout << "What's the result of " << rnum1 << " * " << rnum2 << " : ";
                std::cin >> userResult;
                result = rnum1 * rnum2;
                break;
        }

        if(userResult == result){
            std::cout << "Congratulations!  You got the result " << result << " right!" << std::endl;
        }else{
            std::cout << "Naah! the correct result is : " << result << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Do you want me to try again? (Y | N) : ";

        char c = 'n';
        std::cin >> c;
        if(c == 'y' || c == 'Y'){

        }else{
            std::cout << "See you later!" << std::endl;
            break;
        }
    }

    return 0;
}