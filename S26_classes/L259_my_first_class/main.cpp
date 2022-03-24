#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{

    public :
    double volume(){
        return PI * base_radius * base_radius * height;
    }

    public :        // generally should be "private :"

    // member variables
    double base_radius{12};
    double height{2};

};

int main (){

    Cylinder cyl1;  // object
    std::cout << "volume = " << cyl1.volume() << std::endl;

    // change member variables  (can do if they're public)
    cyl1.height = 23;
    cyl1.base_radius = 8;

    std::cout << "volume = " << cyl1.volume() << std::endl;


    return 0;
}