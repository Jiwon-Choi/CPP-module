#include "Array.hpp"

int main(void) {
    Array<int> intArr(3);
    try {
        std::cout << "size: " << intArr.size() << std::endl;
        for (unsigned int i = 0; i < intArr.size(); i++) {
            intArr[i] = i + 1;
            std::cout << i << ": " << intArr[i] << std::endl;
        }
        std::cout << intArr[intArr.size()] << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
