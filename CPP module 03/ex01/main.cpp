#include "ScavTrap.hpp"

int main(void) {
    ScavTrap st("st1");
    std::cout << std::endl;

    st.attack("st2");
    st.takeDamage(2);
    st.beRepaired(10);
    st.takeDamage(100);
    st.beRepaired(10);
    std::cout << std::endl;

    st.guardGate();
    std::cout << std::endl;

    return (0);
}
