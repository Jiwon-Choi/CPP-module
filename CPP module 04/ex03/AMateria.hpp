#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
    std::string _type;
    bool _unequip;

    public:
    AMateria(void);
    AMateria(const AMateria& ref);
    AMateria(std::string const & type);
    virtual ~AMateria(void);

    AMateria& operator=(const AMateria& ref);

    void setUnequip(void);
    const bool& getUnequip(void) const;

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
