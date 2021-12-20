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

void ScavTrap::attack(std::string const& target) {
    std::cout << "ScavTrap "<< getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    int hp = getHitPoints();
    if (!hp) {
        std::cout << "ScavTrap " << getName() << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << getName() << " has taken " << amount << " points of damage" << std::endl;
    hp -= amount;
    if (hp < 0) {
        hp = 0;
        std::cout << "ScavTrap " << getName() << " is died" << std::endl;
    }
    setHitPoints(hp);
}

void ScavTrap::beRepaired(unsigned int amount) {
    int hp = getHitPoints();
    if (!hp) {
        std::cout << "ScavTrap " << getName() << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << getName() << " has been completely repaired" << std::endl;
    hp += amount;
    setHitPoints(hp);
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
}
