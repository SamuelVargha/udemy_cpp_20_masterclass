#include <iostream>
#include <iomanip>

int main (){
    
    // 2D array
    int packages [3][4] {          // 12 locations to store ints
        {1,2,3,4},
        {10,20,30,40},
        {100,200,300,400},
    };

    // modifying data in 2D array
    packages[2][3] = 0;

    std::cout << std::left;

    // read data from 2D array
    for(size_t i{0}; i < std::size(packages); ++i){

        for(size_t j{0}; j < std::size(packages[i]); ++j){
            std::cout << std::setw(4) << packages[i][j] << " ";
        }
        std::cout << std::endl;

    }

    std::cout << "==============" << std::endl;

    // 3D array
    int houseBlock [7][5][3]{
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            {31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
            {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
        },
        {
            {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
        },
        {
            {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
        },
        {
            {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
        },
    };

    // modifying data in 3D array
    houseBlock[1][1][3] = 27;

    for(size_t i{0}; i < std::size(houseBlock); ++i){

        for(size_t j{0}; j < std::size(houseBlock[i]); ++j){

            for(size_t k{0}; k < std::size(houseBlock[i][j]); ++k){

                std::cout << std::setw(4) << houseBlock[i][j][k] << " ";

            }
            std::cout << std::endl;

        }
        std::cout << std::endl;
    }

    return 0;
}