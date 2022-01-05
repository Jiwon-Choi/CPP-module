#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
    : Form(ref) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref) {
    Form::operator=(ref);
    return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() > getExecuteGrate())
        return (false);
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    return (true);
}
