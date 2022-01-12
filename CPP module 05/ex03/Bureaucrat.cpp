#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : _name(ref._name), _grade(ref._grade) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref) {
    _grade = ref._grade;
    return (*this);
}

const std::string& Bureaucrat::getName(void) const {
    return (_name);
}

const int& Bureaucrat::getGrade(void) const {
    return (_grade);
}

void Bureaucrat::increaseGrade(void) {
    if (_grade <= 1)
        throw GradeTooHighException();
    --_grade;
}

void Bureaucrat::decreaseGrade(void) {
    if (_grade >= 150)
        throw GradeTooLowException();
    ++_grade;
}

void Bureaucrat::signForm(Form& form) {
    try {
        if (form.beSigned(*this) == false)
            throw GradeTooLowException();
        std::cout << _name << " signs " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const& form) {
    try {
        if (form.execute(*this) == false)
            throw GradeTooLowException();
        std::cout << _name << " executes " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ref) {
    os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
    return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade Too Low");
}
