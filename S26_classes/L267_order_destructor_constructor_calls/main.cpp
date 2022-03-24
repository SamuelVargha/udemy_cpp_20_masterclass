#include <iostream>
#include <string_view>

class Dog{
    public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

    private:
    std::string name;
    std::string breed;
    int* p_age {nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "constructor called for: " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "destructor called for: " << name << std::endl;
}

int main (){

    Dog doggy1("Doggy1", "Sheperd", 3);
    Dog doggy2("Doggy2", "Sheperd", 2);
    Dog doggy3("Doggy3", "Sheperd", 5);
    Dog doggy4("Doggy4", "Sheperd", 1);

    return 0;
}