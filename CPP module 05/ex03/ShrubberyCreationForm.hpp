#ifndef __SHRUBBERY_HPP__
# define __SHRUBBERY_HPP__

# include <fstream>
# include "Form.hpp"

# define SHRUBBERY "\
              * *\n\
           *    *  *\n\
      *  *    *     *  *\n\
     *     *    *  *    *\n\
 * *   *    *    *    *   *\n\
 *     *  *    * * .#  *   *\n\
 *   *     * #.  .# *   *\n\
  *     *#.  #: #* * *    *\n\
 *   * * *#. ##*       *\n\
   *        ###\n\
             ##\n\
             ##.\n\
             .##:\n\
             :###\n\
             ;###\n\
            ,####.\n\
///////////.######.///////////"

class ShrubberyCreationForm : public Form {
    private:
    const std::string _target;

    ShrubberyCreationForm(void);

    public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& ref);
    ~ShrubberyCreationForm(void);

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);

    bool execute(Bureaucrat const& executor) const;
};

#endif
