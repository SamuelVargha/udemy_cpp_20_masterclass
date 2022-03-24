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

    public:
    void print_info(){
        std::cout << "Dog(" << this << "): [ name: " << name << ", breed: " << breed
            << ", age: " << *p_age << " ]" << std::endl;
    }

    // setters
    void set_name(std::string_view name){
        //name = name   // does nothing
        this->name = name;
    }
    void set_breed(std::string_view breed){
        this->breed = breed;
    }
    void set_age(int age){
        *(this->p_age) = age;
    }
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "constructor called for: " << name << " at " << this << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "destructor called for: " << name << " at " << this << std::endl;
}

int main (){

    Dog dog1("Bun", "Sheperd", 3); // calls constructor

    dog1.set_name("bunbun");
    dog1.set_breed("poodle");
    dog1.set_age(1);
    dog1.print_info();


    // calls destructor
    return 0;
}