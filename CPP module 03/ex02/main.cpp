#include "FragTrap.hpp"

int main(void) {
    FragTrap fragTrap1("fragTrap1");
    FragTrap fragTrap2("fragTrap2");
    std::cout << std::endl;

    fragTrap1.attack("fragTrap2");
    fragTrap2.takeDamage(fragTrap1.getAttackDamage());
    std::cout << std::endl;

    fragTrap2.attack("fragTrap1");
    fragTrap1.takeDamage(fragTrap2.getAttackDamage());
    std::cout << std::endl;

    fragTrap1.highFivesGuys();
    fragTrap2.highFivesGuys();
    std::cout << std::endl;

    return (0);
}
