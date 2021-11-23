#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* zombie[N];

    for (int i = 0; i < N; i++) {
        zombie[i] = new Zombie(name + std::to_string(i));
    }
    return (zombie[0]);
}
