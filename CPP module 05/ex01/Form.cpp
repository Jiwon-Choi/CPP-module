#include "Form.hpp"

Form::Form(void)
        : _name(""),
        _signGrade(1),
        _executeGrade(1),
        _sign(false) {}

Form::Form(std::string name)
        : _name(name),
        _signGrade(1),
        _executeGrade(1),
        _sign(false) {}

Form::Form(std::string name, int signGrade, int executeGrade)
        : _name(name),
        _signGrade(signGrade),
        _executeGrade(executeGrade),
        _sign(false) {
    if (_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& ref)
        : _name(ref._name),
        _signGrade(ref._signGrade),
        _executeGrade(ref._executeGrade),
        _sign(ref._sign) {}

Form::~Form() {}

Form& Form::operator=(const Form& ref) {
    _sign = ref._sign;
    return (*this);
}

const std::string& Form::getName(void) const {
    return (_name);
}

const int& Form::getSignGrade(void) const {
    return (_signGrade);
}

const int& Form::getExecuteGrate(void) const {
    return (_executeGrade);
}

const bool& Form::getSign(void) const {
    return (_sign);
}

bool Form::beSigned(const Bureaucrat& bu) {
    if (bu.getGrade() > _signGrade)
        return (false);
    _sign = true;
    return (true);
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade Too Low");
}
