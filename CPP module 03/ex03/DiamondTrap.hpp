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
    virtual ~DiamondTrap(void);

    DiamondTrap& operator=(const DiamondTrap& ref);

    void attack(std::string const& target);
    void whoAmI(void);
};

#endif
