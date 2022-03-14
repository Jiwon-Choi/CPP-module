#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat namgu("Namgu", 2);
        std::cout << namgu << std::endl;

        namgu.increaseGrade();
        std::cout << namgu << std::endl;

        namgu.increaseGrade();
        std::cout << namgu << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------------------------" << std::endl;
    try {
        Bureaucrat bori("Bori", 149);
        std::cout << bori << std::endl;

        bori.decreaseGrade();
        std::cout << bori << std::endl;

        bori.decreaseGrade();
        std::cout << bori << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
