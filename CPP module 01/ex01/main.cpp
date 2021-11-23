#include "Zombie.hpp"

int main(void) {
    Zombie* zombie = zombieHorde(5, "zombie");
    std::cout << std::endl;

    zombie->announce();
    zombie++;
    zombie->announce();
    return (0);
}
