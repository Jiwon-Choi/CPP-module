#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    _name = name;
    std::cout << "<" << _name << "> Zombie constructor is called" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "<" << _name << "> Zombie destructor is called" << std::endl;
}

void Zombie::announce(void) {
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
