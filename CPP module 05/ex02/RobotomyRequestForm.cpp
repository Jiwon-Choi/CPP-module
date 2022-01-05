#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
    : Form(ref) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref) {
    Form::operator=(ref);
    return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() > getExecuteGrate())
        return (false);
    srand(time(NULL));
    if (rand() % 2 == 0) {
        std::cout << "drrrrrrr... " << _target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << "..." << std::endl;
    }
    return (true);
}
