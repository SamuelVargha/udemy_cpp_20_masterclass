#include <iostream>

int main (){
    
    int num1 = 43;
    int num2 = 12;

    if(num1 > num2){
        std::cout << "num1 > num2" << std::endl;
    }

    bool red = false;
    bool green = true;
    bool yellow = false;

    if(green == true){                          // if(green)
        std::cout << "go !!" << std::endl;
    }else{
        std::cout << "stop." << std::endl;
    }


    if(red == false){                           // if(!red)
        std::cout << "dont stop" << std::endl;
    }else{
        std::cout << "bro its red !!" << std::endl;
    }

    bool accident = true;

    if(green){
        if(accident){
            std::cout << "BRO NO THERES BEEN AN ACCIDENT" << std::endl;
        }else{
            std::cout << "LESGOOO" << std::endl;
        }
    }

    accident = false;
    if(green && !accident){
        std::cout << "ok now go" << std::endl;
    }else{
        std::cout << "lets wait" << std::endl;
    }

    // else if
    const int pen { 10 };
    const int marker { 20 };
    const int eraser { 30 };
    const int rectangle { 40 };
    const int circle { 50 };
    const int ellipse { 60 };

    int tool = circle;
    
    if(tool == pen){
        std::cout << "active tool is pen" << std::endl;
    }else if(tool == marker){
        std::cout << "active tool is marker" << std::endl;
    }else if(tool == eraser){
        std::cout << "active tool is eraser" << std::endl;
    }else if(tool == rectangle){
        std::cout << "active tool is rectangle" << std::endl;
    }else if (tool == circle){
        std::cout << "active tool is circle" << std::endl;
    }else if(tool == ellipse){
        std::cout << "active tool is ellipse" << std::endl;
    }

    return 0;
}