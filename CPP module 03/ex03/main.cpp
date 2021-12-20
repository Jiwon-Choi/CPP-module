#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap DiamondTrap1("DiamondTrap1");
    DiamondTrap DiamondTrap2("DiamondTrap2");
    std::cout << std::endl;

    DiamondTrap1.whoAmI();
    DiamondTrap2.whoAmI();
    std::cout << std::endl;

    DiamondTrap1.attack("DiamondTrap2");
    DiamondTrap2.takeDamage(DiamondTrap1.getAttackDamage());
    std::cout << std::endl;

    DiamondTrap1.guardGate();
    DiamondTrap2.highFivesGuys();
    std::cout << std::endl;

    return (0);
}
