#include <iostream>
#include <iomanip>

int main (){
    
    const size_t ROWS {12};
    const size_t COLS {5};

    // nested for loops
    std::cout << "tabular data visualisation with nested for loops:" << std::endl;
    for( size_t row = 0 ; row < ROWS ; row++ ){
        for(size_t col = 0 ; col < COLS ; col++ ){
            std::cout << " (row:" << std::setw(2) << row << ", col:" << std::setw(2) << col << ")";
        }
        std::cout << std::endl;
    }

    std::cout << "===================" << std::endl;

    //nested while loops
    size_t row {0};
    size_t col {0};

    std::cout << "tabular data visualisation with nested while loops:" << std::endl;
    while(row < ROWS){
        while(col < COLS){
            std::cout << " (row:" << std::setw(2) << row << ", col:" << std::setw(2) << col << ")";
            ++col;
        }
        std::cout << std::endl;
        col = 0;        // need to reset col value (for loops does it on its own)
        ++row;
    }

    return 0;
}