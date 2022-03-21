#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat Default Constructor is called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ref) {
    std::cout << "WrongCat Copy Constructor is called" << std::endl;
    *this = ref;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat Destructor is called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& ref) {
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void WrongCat::makeSound(void) const {
    std::cout << "야옹" << std::endl;
}
