#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

#include <iostream>
#include <string>

class ClapTrap {
    private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

    public:
    ClapTrap(std::string name);
    ~ClapTrap(void);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
