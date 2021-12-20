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

void FragTrap::attack(std::string const& target) {
    std::cout << "FragTrap "<< getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    int hp = getHitPoints();
    if (!hp) {
        std::cout << "FragTrap " << getName() << " is already dead" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << getName() << " has taken " << amount << " points of damage" << std::endl;
    hp -= amount;
    if (hp < 0) {
        hp = 0;
        std::cout << "FragTrap " << getName() << " is died" << std::endl;
    }
    setHitPoints(hp);
}

void FragTrap::beRepaired(unsigned int amount) {
    int hp = getHitPoints();
    if (!hp) {
        std::cout << "FragTrap " << getName() << " is already dead" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << getName() << " has been completely repaired" << std::endl;
    hp += amount;
    setHitPoints(hp);
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << getName() << " highFives!" << std::endl;
}
