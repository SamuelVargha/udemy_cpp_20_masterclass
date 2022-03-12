#include <iostream>

int main (){

	double x { 12.5 };
    double y { 34.6 };

    // implicit
    int sum = x + y;
    std::cout << "The sum  is: " << sum << std::endl;

    // explicit
    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "The sum  is: " << sum << std::endl;

    // explicit at the end
    sum = static_cast<int>( x + y );
    std::cout << "The sum  is: " << sum << std::endl;

    return 0;
}