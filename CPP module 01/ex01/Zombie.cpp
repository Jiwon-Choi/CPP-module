#include "Zombie.hpp"

Zombie::Zombie(void) {
    std::cout << "Zombie constructor is called" << std::endl;
}

Zombie::Zombie(std::string name) {
    _name = name;
    std::cout << "<" << _name << "> Zombie constructor is called" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "<" << _name << "> Zombie destructor is called" << std::endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}

void Zombie::announce(void) {
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
