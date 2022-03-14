#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    type = "Dog";
    std::cout << "Dog Default Constructor is called" << std::endl;
}

Dog::Dog(const Dog& ref) : Animal(ref) {
    std::cout << "Dog Copy Constructor is called" << std::endl;
}

Dog::~Dog(void) {
    std::cout << "Dog Destructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog& ref) {
    if (this != &ref)
        Animal::operator=(ref);
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "왈왈" << std::endl;
}
