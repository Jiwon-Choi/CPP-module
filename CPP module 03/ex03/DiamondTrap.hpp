#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
    std::string _name;

    public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& ref);
    ~DiamondTrap(void);

    void whoAmI(void);

    using ScavTrap::attack;
    using ScavTrap::takeDamage;
};

#endif
