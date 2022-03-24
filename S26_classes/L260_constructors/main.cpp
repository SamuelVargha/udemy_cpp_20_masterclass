#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{

    private :
    double base_radius {1};
    double height {1};

    public :

    // constructors
    Cylinder(){
        base_radius = 2;
        height = 2;
    }

    Cylinder(double rad_param, double height_param){
        base_radius = rad_param;
        height = height_param;
    }

    double volume(){
        return PI * base_radius * base_radius * height;
    }
};

int main (){

    Cylinder cyl1;  // uses constructor to create object
    std::cout << "volume = " << cyl1.volume() << std::endl;

    Cylinder cyl2(10,2);  // also uses constructor to create object
    std::cout << "volume = " << cyl2.volume() << std::endl;

    // if we dont have a constructor, the compiler will generate an empty one

    return 0;
}