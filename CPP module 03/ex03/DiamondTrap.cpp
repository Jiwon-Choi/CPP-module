#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap() {
    _name = "default";
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap Default Constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap() {
    _name = name;
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap " << _name << " Constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref) : FragTrap(ref), ScavTrap(ref) {
    _name = ref._name;
    std::cout << "DiamondTrap Copy Constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap " << _name << " Destructor is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref) {
    _name = ref._name;
    ClapTrap::operator=(ref);
    return (*this);
}

void DiamondTrap::attack(std::string const& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name : " << _name << ", ClapTrap name : " << ClapTrap::_name << std::endl;
}
