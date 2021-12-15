#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap Default Constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() << " Constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref) {
    std::cout << "FragTrap Copy Constructor is called" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << getName() << " Destructor is called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << getName() << " positive high fives request on the standard output" << std::endl;
}
