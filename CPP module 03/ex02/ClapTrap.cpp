#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Default Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref) : _name(ref._name), _hitPoints(ref._hitPoints), _energyPoints(ref._energyPoints), _attackDamage(ref._attackDamage) {
    std::cout << "ClapTrap Copy Constructor is called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << _name << " Destructor is called" << std::endl;
}

void ClapTrap::attack(std::string const& target) {
    std::cout << "ClapTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!_hitPoints) {
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage" << std::endl;
    _hitPoints -= amount;
    if (_hitPoints < 0) {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " is died" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!_hitPoints) {
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " has been completely repaired" << std::endl;
    _hitPoints += amount;
}

std::string ClapTrap::getName(void) {
    return (_name);
}

int ClapTrap::getHitPoints(void) {
    return (_hitPoints);
}

int ClapTrap::getEnergyPoints(void) {
    return (_energyPoints);
}

int ClapTrap::getAttackDamage(void) {
    return (_attackDamage);
}

void ClapTrap::setName(std::string name) {
    _name = name;
}

void ClapTrap::setHitPoints(unsigned int amount) {
    _hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount) {
    _energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount) {
    _attackDamage = amount;
}
