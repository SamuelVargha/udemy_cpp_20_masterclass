#include <iostream>
#include <bitset>

int main (){

    unsigned short int value {0xff0u};

	std::cout << "Size of short int " << sizeof(short int) <<  std::endl;   // 16 bits
	
    std::cout << "value: " << std::bitset<16>(value) 
        << ", dec: " << value << std::endl;

    // shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) 
        << ", dec: " << value << std::endl;

    // shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) 
    << ", dec: " << value << std::endl;

    // shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) 
    << ", dec: " << value << std::endl;


    // shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) 
    << ", dec: " << value << std::endl;

    // shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) 
    << ", dec: " << value << std::endl;

    //shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value: " << std::bitset<16>(value) 
    << ", dec: " << value << std::endl;

    // shift right by four bits 
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value: " << std::bitset<16>(value) 
    << ", dec: " << value << std::endl;

    // wrap in parenthases when using cout
    std::cout << "value: " << (value >> 1) << std::endl;

    return 0;
}