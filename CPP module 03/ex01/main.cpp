#include "ClapTrap.hpp"

int main(void) {
    ClapTrap ct("ct1");

    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.attack("ct2");
    ct.takeDamage(2);
    ct.takeDamage(2);
    ct.beRepaired(5);
    ct.takeDamage(100);
    ct.beRepaired(10);

    return (0);
}
