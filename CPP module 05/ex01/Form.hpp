#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string _name;
    const int _signGrade;
    const int _executeGrade;
    bool _isSigned;

public:
    Form(void);
    Form(std::string name);
    Form(std::string name, int signGrade, int executeGrade);
    Form(const Form& ref);
    ~Form(void);

    Form& operator=(const Form& ref);

    const std::string& getName(void) const;
    const int& getSignGrade(void) const;
    const int& getExecuteGrate(void) const;
    const bool& getIsSigned(void) const;

    bool beSigned(const Bureaucrat& bu);

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Form& ref);

#endif
