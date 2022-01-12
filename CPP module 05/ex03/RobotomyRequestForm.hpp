#ifndef __ROBOTOMY_HPP__
# define __ROBOTOMY_HPP__

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
    const std::string _target;

    RobotomyRequestForm(void);

    public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& ref);
    ~RobotomyRequestForm(void);

    RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);

    bool execute(Bureaucrat const& executor) const;
};

#endif
