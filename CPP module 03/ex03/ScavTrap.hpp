#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
    public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& ref);
    ~ScavTrap(void);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void guardGate(void);
};

#endif
