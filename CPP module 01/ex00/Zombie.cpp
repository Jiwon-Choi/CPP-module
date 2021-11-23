#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    _name = name;
    std::cout << "<" << _name << "> constructor" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "<" << _name << "> destructor" << std::endl;
}

void Zombie::announce(void) {
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
