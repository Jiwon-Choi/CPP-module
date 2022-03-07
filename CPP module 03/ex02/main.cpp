#include "FragTrap.hpp"

int main(void) {
    FragTrap ft("ft1");
    std::cout << std::endl;

    ft.attack("ft2");
    ft.takeDamage(2);
    ft.beRepaired(10);
    ft.takeDamage(1000);
    ft.beRepaired(10);
    std::cout << std::endl;

    ft.highFivesGuys();
    std::cout << std::endl;

    return (0);
}
