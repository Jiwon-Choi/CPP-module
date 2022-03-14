#include "Intern.hpp"

Intern::Intern(void) {}
Intern::Intern(const Intern& ref) { (void)ref; }
Intern::~Intern(void) {}

Intern& Intern::operator=(const Intern& ref) {
    (void)ref;
    return (*this);
}

Form* Intern::makeForm(std::string formName, std::string target) {
    std::string formType[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
    int formNum = std::find(formType, formType + 3, formName) - formType;

    switch (formNum) {
    default:
        std::cout << "The requested form is not known" << std::endl;
        return (NULL);
    case 0:
        std::cout << "Intern creates " << formName << std::endl;
        return new ShrubberyCreationForm(target);
    case 1:
        std::cout << "Intern creates " << formName << std::endl;
        return new RobotomyRequestForm(target);
    case 2:
        std::cout << "Intern creates " << formName << std::endl;
        return new PresidentialPardonForm(target);
    }
}
