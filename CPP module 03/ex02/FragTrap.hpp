#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& ref);
    ~FragTrap(void);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void highFivesGuys(void);
};

#endif
