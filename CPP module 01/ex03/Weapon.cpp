#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    _type = type;
    std::cout << "Weapon constructor is called" << std::endl;
}

Weapon::~Weapon(void) {
    std::cout << "Weapon destructor is called" << std::endl;
}

const std::string& Weapon::getType(void) {
    return (_type);
}

void Weapon::setType(std::string type) {
    _type = type;
}
