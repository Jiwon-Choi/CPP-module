#include "ScavTrap.hpp"

int main(void) {
    ScavTrap st1("st1");
    ScavTrap st2("st2");
    std::cout << std::endl;

    st1.attack("st2");
    st2.takeDamage(st1.getAttackDamage());
    std::cout << std::endl;

    st2.attack("st1");
    st1.takeDamage(st2.getAttackDamage());
    std::cout << std::endl;

    st1.guardGate();
    st2.guardGate();
    std::cout << std::endl;

    return (0);
}
