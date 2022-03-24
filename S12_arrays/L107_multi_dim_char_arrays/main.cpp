#include <iostream>

int main (){
    
    const size_t nameLength {15};

    char streamers [][nameLength]{    // first parameter is deduced by compiler ([4][15])
        "xqcow",
        "forsen",
        "qtcindrella",
        "mayahiga",
    };

    // printing out members
    std::cout << "printing out members:" << std::endl;
    for(size_t i {0}; i < std::size(streamers); ++i){
        std::cout << "streamer#" << (i+1) << ": " << streamers[i] << std::endl;
    }

    return 0;
}