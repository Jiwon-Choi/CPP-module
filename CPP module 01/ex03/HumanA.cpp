#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) {
    std::cout << "HumanA constructor is called" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA destructor is called" << std::endl;
}

void HumanA::attack(void) {
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
