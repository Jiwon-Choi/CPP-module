#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default Constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " Constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref) {
    std::cout << "FragTrap Copy Constructor is called" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << _name << " Destructor is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ref) {
    ClapTrap::operator=(ref);
    std::cout << "FragTrap " << _name << " assignment operator is called" << std::endl;
    return (*this);
}

void FragTrap::attack(std::string const& target) {
    std::cout << "FragTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " highFives!" << std::endl;
}
