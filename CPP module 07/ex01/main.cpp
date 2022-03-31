#include "iter.hpp"
#include <iostream>

template <typename T>
void func(T const & t) {
    std::cout << t << std::endl;
}

int main(void) {
    int intArr[] = {1, 2, 3, 4, 5};
    std::string strArr[] = {"a", "b", "c", "de", "fgh"};

    iter(intArr, 5, func);
    iter(strArr, 5, func);

    return (0);
}
