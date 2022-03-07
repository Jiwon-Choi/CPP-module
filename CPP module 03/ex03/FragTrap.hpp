#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& ref);
    virtual ~FragTrap(void);

    FragTrap& operator=(const FragTrap& ref);

    void attack(std::string const& target);
    void highFivesGuys(void);
};

#endif
