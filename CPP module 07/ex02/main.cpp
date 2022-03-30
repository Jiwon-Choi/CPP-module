#include "Array.hpp"

#define MAX_VAL 5
int main(int, char**) {
    Array<int> intArr(MAX_VAL);
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
        intArr[i] = rand();

    try {
        std::cout << intArr[-1] << '\n';
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        for (unsigned int i = 0; i < intArr.size(); i++)
            std::cout << intArr[i] << ' ';
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << '\n';

    try {
        std::cout << intArr[intArr.size()] << '\n';
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    {
        Array<int> copy = intArr;
        copy[copy.size() - 1] = 1111;
        for (unsigned int i = 0; i < copy.size(); i++)
            std::cout << copy[i] << ' ';
    }
    std::cout << '\n';

    return (0);
}
