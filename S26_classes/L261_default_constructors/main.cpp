#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{

    private :
    double base_radius {1};
    double height {1};

    public :

    // constructors
    Cylinder() = default;   // make our own empty (default) constructor

    Cylinder(double rad_param, double height_param){
        base_radius = rad_param;
        height = height_param;
    }

    double volume(){
        return PI * base_radius * base_radius * height;
    }
};

int main (){

    Cylinder cyl1;
    std::cout << "volume = " << cyl1.volume() << std::endl;

    return 0;
}