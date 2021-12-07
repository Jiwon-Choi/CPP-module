#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap Default Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref) {
    std::cout << "ScavTrap Copy Constructor is called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << getName() << " Destructor is called" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
}
