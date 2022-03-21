#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal Default Constructor is called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref) {
    std::cout << "WrongAnimal Copy Constructor is called" << std::endl;
    *this = ref;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal Destructor is called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref) {
    if (this != &ref)
        type = ref.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const {
    return (type);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Some WrongAnimal's Sound" << std::endl;
}
