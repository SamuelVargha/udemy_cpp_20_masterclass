#include <iostream>

int main (){

    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    int * p_score { scores};

    std::cout << "Values in scores array (p_score pointer increment):" << std::endl;
	
    std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int: 4 bytes
	
	std::cout << "address: " << p_score << " value: " <<  *(p_score) << std::endl;
	++p_score; // moves froward by sizeof(int): 4 bytes

    std::cout << "==============================" << std::endl;

	std::cout << "Explicit addition of integer:" << std::endl;
	p_score = scores;                                               // reset the pointer to the start of the array
	std::cout << "scores[4] : " << *(p_score + 4) << std::endl;     // moves forward by 4 * sizeof(int)

    std::cout << "==============================" << std::endl;

    std::cout << "Pointer arithmetic on p_scores pointer and a for loop:" << std::endl;
    for ( size_t i{0} ; i < std::size(scores) ; ++i){
        std::cout <<"value: "<< *(p_score + i) << std::endl; // scores[i]
    }

    std::cout << "==============================" << std::endl;

    p_score = scores;
    
    std::cout << "pointer arithmetic on array name:" << std::endl;
    for ( size_t i{0} ; i < std::size(scores) ; ++i){
        std::cout <<"value: "<< *(scores + i) << std::endl;
	}

    std::cout << "==============================" << std::endl;

    // printing in reverse order
    std::cout << "elements in reverse order:" << std::endl;
    p_score = scores + std::size(scores) -1;
	for ( size_t i{std::size(scores)} ; i > 0 ; --i){
        std::cout <<"value: "<< *(p_score--) << std::endl;
    }

    std::cout << "==============================" << std::endl;

    p_score = scores;
    
    scores[0] = 31;         // array index notation
    *(scores + 1) = 32;     // equivalent to scores[1] = 32, pointer arithmetic on array name
    *(p_score + 2) = 33;    // equivalent to scores[2] = 33, pointer arithmetic on p_score pointer
    
	std::cout << "printing out the array after modification of 3 first elements:" << std::endl;
    for ( size_t i{0} ; i < std::size(scores) ; ++i){
        std::cout <<"value: "<< scores[i] << std::endl;
    }

    return 0;
}