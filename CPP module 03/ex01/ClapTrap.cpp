#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}

void ClapTrap::attack(std::string const& target) {
    if (!_energyPoints) {
        std::cout << "ClapTrap " << _name << "'s energy point is not enough" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target
            << ", causing " << _attackDamage << " points of damage!" << std::endl;
    --_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!_hitPoints) {
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return ;
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    if (_hitPoints < 0) {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " is died" << std::endl;
        return ;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!_hitPoints) {
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return ;
    }
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points" << std::endl;
}
