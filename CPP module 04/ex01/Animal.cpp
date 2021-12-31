#include "Animal.hpp"

Animal::Animal(void) {
    type = "Animal";
    std::cout << "Animal Default Constructor is called" << std::endl;
}

Animal::Animal(const Animal& ref) : type(ref.type) {
    std::cout << "Animal Copy Constructor is called" << std::endl;
}

Animal::~Animal(void) {
    std::cout << "Animal Destructor is called" << std::endl;
}

Animal& Animal::operator=(const Animal& ref) {
    type = ref.type;
    return (*this);
}

std::string Animal::getType(void) const {
    return (type);
}

void Animal::makeSound(void) const {
    std::cout << "Some Animal's Sound" << std::endl;
}
