#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& ref);
    ~FragTrap(void);
};

#endif
