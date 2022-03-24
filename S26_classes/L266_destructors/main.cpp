#include <iostream>
#include <string_view>

class Dog{
    public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog(); // destructor declaration

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
}

Dog::~Dog(){    // destructor
    delete p_age;
    std::cout << "destructor called for: " << name << std::endl;
}

void function1(){
    Dog dog("Beego", "Labrador", 3);
    // before we leave the function, destructor for dog will be called
}

void function2(){
    Dog* p_smolDog = new Dog("Pupu", "Toy Poodle", 1);

    delete p_smolDog;   // causes destructor for object to be called
}

int main (){

    function1();
    function2();

    Dog my_dog("Fluffy", "Shepherd", 2); // destructor is called when object is destoryed

    return 0;
}