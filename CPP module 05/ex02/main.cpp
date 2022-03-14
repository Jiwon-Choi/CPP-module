#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    try {
        Bureaucrat namgu("Namgu", 3);
        ShrubberyCreationForm shru("shrubberyyyyy");
        namgu.executeForm(shru);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat bori("Bori", 10);
        RobotomyRequestForm robo("robot");
        bori.executeForm(robo);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Bureaucrat donggu("Donggu", 2);
        PresidentialPardonForm pre("Song i");
        donggu.executeForm(pre);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
