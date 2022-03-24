#include <iostream>
#include <ctime>

int main (){
    
    const char * message1 {"Hello World!"};                 // has to be const

    std::cout << "message1: " << message1 << std::endl;

    //*message = "B";   // compiler error

    std::cout << "*message1: " << *message1 << std::endl;    // prints message1[0]

    // allow users to modify string
    char message2[] {"Hello World!"};
    message2[0] = 'B';
    message2[6] = 'B';
    message2[11] = ' ';
    std::cout << "message2: " << message2 << std::endl;

    // array of pointers to char
    const char * events []  {
        "A lot of kids running in the backyard!",
        "A lot of empty beer bootles on your work table.",
        "You Partying too much with kids wearing weird clothes.",
        "You running away from something really scary.",
        "Clouds gathering in the sky and an army standing ready for war.",
        "Dogs running around in a deserted empty city.",
        "A lot of cars stuck in a terrible traffic jam.",
        "You sitting in the dark typing lots of lines of code on your dirty computer.",
        "You yelling at your boss. And oh no! You get fired!",
        "You laughing your lungs out. I've never seen this before." 
    };
    
    std::srand(std::time(0));
    int random = std::rand() % 10;
    std::cout << "event: " << events[random] << std::endl;


    return 0;
}