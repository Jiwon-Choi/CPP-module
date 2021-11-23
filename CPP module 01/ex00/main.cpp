#include "Zombie.hpp"

int main(void) {
    Zombie* zombie = newZombie("new zombie");
    std::cout << std::endl;

    randomChump("randomChump zombie");
    std::cout << std::endl;

    delete zombie;
    return (0);
}