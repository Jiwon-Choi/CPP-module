#include "Cat.hpp"

Cat::Cat(void) : Animal() {
    type = "Cat";
    std::cout << "Cat Default Constructor is called" << std::endl;
}

Cat::Cat(const Cat& ref) : Animal(ref) {
    std::cout << "Cat Copy Constructor is called" << std::endl;
}

Cat::~Cat(void) {
    std::cout << "Cat Destructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat& ref) {
    Animal::operator=(ref);
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "야옹" << std::endl;
}
