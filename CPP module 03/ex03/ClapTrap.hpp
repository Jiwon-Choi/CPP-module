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
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& ref);
    ~ClapTrap(void);

    ClapTrap& operator=(const ClapTrap& ref);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void);
    int getHitPoints(void);
    int getEnergyPoints(void);
    int getAttackDamage(void);

    void setName(std::string name);
    void setHitPoints(unsigned int amount);
    void setEnergyPoints(unsigned int amount);
    void setAttackDamage(unsigned int amount);
};

#endif
