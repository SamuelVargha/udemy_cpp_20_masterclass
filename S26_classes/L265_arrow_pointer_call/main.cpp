#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{

    private :
    double base_radius {1};
    double height {1};

    public :
    Cylinder() = default;

    Cylinder(double radVal, double heightVal){
        base_radius = radVal;
        height = heightVal;
    }

    // functions (methods)
    double volume(){
        return PI * base_radius * base_radius * height;
    }

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

    Cylinder cyl1(10,10);

    // managing a stack object through pointers
    Cylinder *p_cyl1 = &cyl1;

    std::cout << "volume = " << (*p_cyl1).volume() << std::endl;
    std::cout << "volume = " <<  p_cyl1->volume() << std::endl;  //equivalent

    // create cylinder heap object through the new operator
    Cylinder* p_cyl2 = new Cylinder(22,8);  // heap object

    std::cout << "cyl2 height = " << p_cyl2->get_height() << std::endl;
    std::cout << "cyl2 radius = " << p_cyl2->get_base_radius() << std::endl;
    std::cout << "cyl2 volume = " << p_cyl2->volume() << std::endl;

    delete p_cyl2;

    return 0;
}