#include "ClapTrap.hpp"

int main(void) {
    ClapTrap ct("ct1");
    std::cout << std::endl;

    ct.attack("ct2");
    ct.takeDamage(2);
    ct.beRepaired(10);
    ct.takeDamage(100);
    ct.beRepaired(10);
    std::cout << std::endl;

    return (0);
}
