#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include <iostream>
# include <string>

class ClapTrap {
    protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

    public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& ref);
    virtual ~ClapTrap(void);

    ClapTrap& operator=(const ClapTrap& ref);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
