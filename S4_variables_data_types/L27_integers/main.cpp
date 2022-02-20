#include <iostream>

int main (){

    std::cout << "===================" << std::endl << std::endl;

    //braced initialization
    //varialbe may contain random garbage value - WARNING
    int elephantCount;

    int lionCount {};   //initializes to 0
    int dogCount {10};  //initializes to 10
    int catCount {15};  //initializes to 15

    //can use expression as initializer
    int domesticatedAnimals { dogCount + catCount };

    //cannot use undefined variables - ERROR
    /* int newNumber {doesntExist}; */

    //cannot initialize int to decimal value - ERROR
    /* int narrowingConversion {2.9}; */

    std::cout << "elephantCount: " << elephantCount << std::endl;
    std::cout << "lionCount: " << lionCount << std::endl;
    std::cout << "dogCount: " << dogCount << std::endl;
    std::cout << "catCount: " << catCount << std::endl;
    std::cout << "domecticatedAnimals: " << domesticatedAnimals << std::endl;

    std::cout << std::endl << "===================" << std::endl << std::endl;

    //functional initialization
    int appleCount(5);
    int orangeCount(10);
    int fruitCount ( appleCount + orangeCount );

    //information lost, less safe than braced initialization
    int narrowingConversionFunc (2.9);

    std::cout << "appleCount: " << appleCount << std::endl;
    std::cout << "orangeCount: " << orangeCount << std::endl;
    std::cout << "fruitCount: " << fruitCount << std::endl;
    std::cout << "narrowingConversionFunc: " << narrowingConversionFunc << std::endl;

    std::cout << std::endl << "===================" << std::endl << std::endl;

    //assignment initialization
    int carCount = 2;
    int truckCount = 7;
    int vehicleCount = carCount + truckCount;
    int narrowingConversionAss = 2.9;

    std::cout << "carCount: " << carCount << std::endl;
    std::cout << "truckCount: " << truckCount << std::endl;
    std::cout << "vehicleCount: " << vehicleCount << std::endl;
    std::cout << "narrowingConversionAss: " << narrowingConversionAss << std::endl;

    std::cout << std::endl << "===================" << std::endl << std::endl;

    //check the size ov variables with sizeof()
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(truckCount): " << sizeof(truckCount) << std::endl;

    std::cout << std::endl << "===================" << std::endl;

    return 0;
}