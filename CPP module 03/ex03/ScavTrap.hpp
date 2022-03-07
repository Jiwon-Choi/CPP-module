#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
    public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& ref);
    virtual ~ScavTrap(void);

    ScavTrap& operator=(const ScavTrap& ref);

    void attack(std::string const& target);
    void guardGate(void);
};

#endif
