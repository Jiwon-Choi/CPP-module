#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
    try {
        Bureaucrat namgu("Namgu", 10);
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        namgu.executeForm(*rrf);
        namgu.signForm(*rrf);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
