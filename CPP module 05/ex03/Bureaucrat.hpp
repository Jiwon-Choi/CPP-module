#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(void);
    Bureaucrat(std::string name);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& ref);
    ~Bureaucrat(void);

    Bureaucrat& operator=(const Bureaucrat& ref);

    const std::string& getName(void) const;
    const int& getGrade(void) const;

    void increaseGrade(void);
    void decreaseGrade(void);

    void signForm(Form& form);
    void executeForm(Form const& form);

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref);

#endif
