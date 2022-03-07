#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

# define ST_MAX_HP 100

class ScavTrap : public ClapTrap {
    private:
    bool _guardGate;

    public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& ref);
    ~ScavTrap(void);

    ScavTrap& operator=(const ScavTrap& ref);

    void attack(std::string const& target);
    void guardGate(void);
};

#endif
