#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat Default Constructor is called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& ref) {
    std::cout << "Cat Copy Constructor is called" << std::endl;
    *this = ref;
}

Cat::~Cat(void) {
    std::cout << "Cat Destructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat& ref) {
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "야옹" << std::endl;
}
