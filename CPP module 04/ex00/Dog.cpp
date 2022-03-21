#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog Default Constructor is called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& ref) {
    std::cout << "Dog Copy Constructor is called" << std::endl;
    *this = ref;
}

Dog::~Dog(void) {
    std::cout << "Dog Destructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog& ref) {
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "왈왈" << std::endl;
}
