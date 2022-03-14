#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat namgu("Namgu", 3);
        Form form("form", 5, 5);
        namgu.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------------------------" << std::endl;
    try {
        Bureaucrat bori("Bori", 3);
        Form form("form", 1, 5);
        bori.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
