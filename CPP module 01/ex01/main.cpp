#include "Zombie.hpp"

int main(void) {
    int N = 3;
    Zombie* zombie = zombieHorde(N, "zombie");
    std::cout << std::endl;

    for (int i = 0; i < N; i++)
        zombie[i].announce();
    std::cout << std::endl;

    delete[] zombie;
    return (0);
}
