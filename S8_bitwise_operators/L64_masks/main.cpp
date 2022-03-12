#include <iomanip>
#include <iostream>
#include <bitset>

int main (){

    std::cout << std::left;
    const int COLUMN_WIDTH {6};
    
	/*  highlight position for bit of interest with a 1
	    mask other positions with 0                      */
	
    const unsigned char mask_bit_2 {0b00000100};   // bit2
    const unsigned char mask_bit_3 {0b00001000};   // bit3
    const unsigned char mask_bit_1 {0b00000010};   // bit1
    const unsigned char mask_bit_4 {0b00010000};   // bit4
    const unsigned char mask_bit_0 {0b00000001};   // bit0
    const unsigned char mask_bit_5 {0b00100000};   // bit5
    const unsigned char mask_bit_6 {0b01000000};   // bit6
    const unsigned char mask_bit_7 {0b10000000};   // bit7
    

    unsigned char var {0b00000000};     // starts off all bits off
    
    std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl << std::endl;

    


	// <======== SETTING BITS: make them 1 => var != mask ========>
	
    // set bit 1
	std::cout << "Setting bit in position 1" << std::endl;
	var |= mask_bit_1;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	// set bit 5
	std::cout << "Setting bit in position 5" << std::endl;
	var |= mask_bit_5;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl << std::endl;





    // <======== RESETTING BITS: set to 0 => var &= ~(mask) ========>

	//Reset bit 1
	std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_1);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	// reset bit 5
	std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_5);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	// set all bits
	std::cout << "Setting all bits" << std::endl;
    var |= ( mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
             mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	// reset bits at pos 0,2,4,6
	std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // check state of a bit
	std::cout << std::endl;
	std::cout << "Checking the state of each bit position (on/off)" << std::endl;
	std::cout << "bit0 is: " << ((var & mask_bit_0) >> 0 )<< std::endl;
    std::cout << "bit1 is: " << ((var & mask_bit_1) >> 1 ) << std::endl;
    std::cout << "bit2 is: " << ((var & mask_bit_2) >> 2 ) << std::endl;
    std::cout << "bit3 is: " << ((var & mask_bit_3) >> 3 ) << std::endl;
    std::cout << "bit4 is: " << ((var & mask_bit_4) >> 4 ) << std::endl;
    std::cout << "bit5 is: " << ((var & mask_bit_5) >> 5 ) << std::endl;
    std::cout << "bit6 is: " << ((var & mask_bit_6) >> 6 ) << std::endl;
    std::cout << "bit7 is: " << ((var & mask_bit_7) >> 7 ) << std::endl;



    // <========= TOGGLING BITS => var ^ mask ========>
	
	// toggle bit 0
	std::cout << std::endl;
	std::cout << "Toggle bit 0" << std::endl;
    var ^= mask_bit_0;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // toggle bit 7 
	std::cout << "Toggle bit 7" << std::endl;
    var ^= mask_bit_7;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	// toggle multiple bits in one go: the 4 higher bits
	std::cout << "Toggle multiple bits in one go : the 4 higher bits" << std::endl;
    var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var: "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    return 0;
}