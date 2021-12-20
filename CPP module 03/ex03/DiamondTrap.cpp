#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap() {
    _name = "default";
    setName(_name + "_clap_name");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
    std::cout << "DiamondTrap Default Constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap() {
    _name = name;
    setName(_name + "_clap_name");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
    std::cout << "DiamondTrap " << _name << " Constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref) : FragTrap(ref), ScavTrap(ref) {
    std::cout << "DiamondTrap Copy Constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap " << _name << " Destructor is called" << std::endl;
}

void DiamondTrap::whoAmI(void) {
    std::cout << _name << ", " << getName() << std::endl;
}
