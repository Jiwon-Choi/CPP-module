#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap dt("dt1");
    std::cout << std::endl;

    dt.attack("dt2");
    dt.takeDamage(2);
    dt.beRepaired(10);
    dt.takeDamage(1000);
    dt.beRepaired(10);
    std::cout << std::endl;

    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    std::cout << std::endl;

    return (0);
}
