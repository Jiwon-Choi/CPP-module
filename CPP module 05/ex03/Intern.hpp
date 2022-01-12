#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern(void);
    Intern(const Intern& ref);
    ~Intern(void);

    Intern& operator=(const Intern& ref);

    Form* makeForm(std::string formName, std::string target);
};

#endif
