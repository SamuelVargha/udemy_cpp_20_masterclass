#include <iostream>

int main (){

    int day = 0, dayBack = 0, dayOG = 0;
    std::cout << "Which day is it today [1 : Monday,... 7: Sunday ] : " << std::endl;
    std::cin >> day;

    if( day > 7 || day < 1 ){
        std::cout << day << " is not a valid day. Bye!" << std::endl;
        return 1;
    }

    std::cout << "How many days have passed up to today : " << std::endl;
    std::cin >> dayBack;

    dayOG = day - (dayBack % 7);
    if(dayOG < 0){
        dayOG += 7;
    }

    switch(day){
        case 1: 
            std::cout << "Today is Monday" << std::endl;
            break;
        case 2: 
            std::cout << "Today is Tuesday" << std::endl;
            break;
        case 3: 
            std::cout << "Today is Wednesday" << std::endl;
            break;
        case 4: 
            std::cout << "Today is Thursday" << std::endl;
            break;
        case 5: 
            std::cout << "Today is Friday" << std::endl;
            break;
        case 6: 
            std::cout << "Today is Satuday" << std::endl;
            break;
        default: 
            std::cout << "Today is Sunday" << std::endl;
            break;
    }

    switch(dayOG){
        case 1: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Monday" << std::endl;
            break;
        case 2: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Tuesday" << std::endl;
            break;
        case 3: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Wednesday" << std::endl;
            break;
        case 4: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Thursday" << std::endl;
            break;
        case 5: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Firday" << std::endl;
            break;
        case 6: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Saturday" << std::endl;
            break;
        default: 
            std::cout << "If we went back " << dayBack 
                << " days in the past we would hit a Sunday" << std::endl;
            break;
    }

    return 0;
}