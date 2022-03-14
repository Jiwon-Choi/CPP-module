#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref) : WrongAnimal(ref) {
    std::cout << "WrongCat Copy Constructor is called" << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat Destructor is called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& ref) {
    if (this != &ref)
        WrongAnimal::operator=(ref);
    return (*this);
}

void WrongCat::makeSound(void) const {
    std::cout << "야옹" << std::endl;
}
