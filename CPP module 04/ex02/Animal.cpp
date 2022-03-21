#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal Default Constructor is called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal& ref) {
    std::cout << "Animal Copy Constructor is called" << std::endl;
    *this = ref;
}

Animal::~Animal(void) {
    std::cout << "Animal Destructor is called" << std::endl;
}

Animal& Animal::operator=(const Animal& ref) {
    if (this != &ref)
        type = ref.type;
    return (*this);
}

std::string Animal::getType(void) const {
    return (type);
}
