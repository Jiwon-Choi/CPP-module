#ifndef __PRESIDENTIAL_HPP__
# define __PRESIDENTIAL_HPP__

# include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
    const std::string _target;

    PresidentialPardonForm(void);

    public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& ref);
    ~PresidentialPardonForm(void);

    PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);

    bool execute(Bureaucrat const& executor) const;
};

#endif
