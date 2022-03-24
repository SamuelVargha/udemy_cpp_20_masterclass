#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{

    private :
    double base_radius {1};
    double height {1};

    public :

    // constructors
    Cylinder() = default;   // make our own empty (default) constructer

    Cylinder(double radVal, double heightVal){
        base_radius = radVal;
        height = heightVal;
    }

    // functions (methods)
    double volume(){
        return PI * base_radius * base_radius * height;
    }

    // setter and getter methods
    void set_base_radius(double radVal){
        base_radius = radVal;
    }

    void set_height(double heightVal){
        height = heightVal;
    }

    double get_base_radius(){
        return base_radius;
    }

    double get_height(){
        return height;
    }
};

int main (){

    Cylinder cyl1(3,5); // object
    //std::cout << "height = " << cyl1.height << std::endl; // cannot access member variables in main
    std::cout << "height = " << cyl1.get_height() << std::endl;
    std::cout << "radius = " << cyl1.get_base_radius() << std::endl;
    std::cout << "volume = " << cyl1.volume() << std::endl;

    std::cout << "modifying object..." << std::endl;

    // modify our object
    cyl1.set_base_radius(6);
    cyl1.set_height(18);

    std::cout << "height = " << cyl1.get_height() << std::endl;
    std::cout << "radius = " << cyl1.get_base_radius() << std::endl;
    std::cout << "volume = " << cyl1.volume() << std::endl;


    return 0;
}