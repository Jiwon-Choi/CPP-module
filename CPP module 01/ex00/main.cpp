#include "Zombie.hpp"

int main(void) {
    Zombie* zombie[5];

    for (int i = 0; i < 5; i++)
        zombie[i] = newZombie("zombie" + std::to_string(i));
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
        randomChump("randomChump zombie" + std::to_string(i));
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
        delete zombie[i];

    return (0);
}