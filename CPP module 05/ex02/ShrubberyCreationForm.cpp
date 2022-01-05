#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
    : Form(ref) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref) {
    Form::operator=(ref);
    return (*this);
}

bool ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() > getExecuteGrate())
        return (false);

    std::ofstream fout(_target + "_shrubbery");
    fout << SHRUBBERY << std::endl;
    fout.close();
    return (true);
}
