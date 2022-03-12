#include <iostream>

int main (){
    
	char operation;     /*    ( + , - , * , / )    */
    double operand1;
    double operand2;
    bool end {false};
    
    std::cout << "Welcome to Awesome Calculator"<< std::endl;
    
    while((end == false)){

        std::cout << "--------------------------------------------" << std::endl;
        std::cout << "What operation do you want help with? " << std::endl;
        std::cout << "+ , - , * , / are supported. Please choose one and type below"<< std::endl;
        std::cout << "Your operation: ";
        std::cin >> operation;

        if( operation != '+' && operation != '-' && operation != '*' && operation != '/'){
            std::cout << "operaton: " << operation << " NOT SUPPORTED" << std::endl;
            continue;
        }
        
        std::cout << "Please type in your two operands separated by a space and hit enter: ";
        std::cin >> operand1 >> operand2;
        
		switch(operation){
        case '+' : 
            std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
            break;
        case '-' : 
            std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
            break;
        case '*' : 
            std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
            break;
        case '/' : 
            std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
            break;
		}
		
        std::cout << "Continue ? ( Y | N )" << std::endl;
        
        char go_on;
        std::cin >> go_on;
        
        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }
    
    std::cout << "Done helping out. BYE!" << std::endl;

    return 0;
}