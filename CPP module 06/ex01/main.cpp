#include "Data.hpp"

int main(void) {
    Data data;

    uintptr_t p1 = serialize(&data);
    Data * p2 = deserialize(p1);

    std::cout << p2->getId() << ' ' << p2->getBlackHole() << ' ' << p2->getLevel() << std::endl;

    std::cout << std::hex << &data << std::endl;
    std::cout << std::hex << p1 << std::endl;
    std::cout << std::hex << p2 << std::endl;

    return (0);
}
