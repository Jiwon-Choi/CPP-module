#include "Form.hpp"

Form::Form(void)
        : _name("Form"),
        _signGrade(1),
        _executeGrade(1),
        _isSigned(false) {}

Form::Form(std::string name)
        : _name(name),
        _signGrade(1),
        _executeGrade(1),
        _isSigned(false) {}

Form::Form(std::string name, int signGrade, int executeGrade)
        : _name(name),
        _signGrade(signGrade),
        _executeGrade(executeGrade),
        _isSigned(false) {
    if (_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& ref)
        : _name(ref._name),
        _signGrade(ref._signGrade),
        _executeGrade(ref._executeGrade),
        _isSigned(ref._isSigned) {}

Form::~Form() {}

Form& Form::operator=(const Form& ref) {
    _isSigned = ref._isSigned;
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

const bool& Form::getIsSigned(void) const {
    return (_isSigned);
}

bool Form::beSigned(const Bureaucrat& bu) {
    if (bu.getGrade() > _signGrade)
        return (false);
    _isSigned = true;
    return (true);
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade Too Low");
}
