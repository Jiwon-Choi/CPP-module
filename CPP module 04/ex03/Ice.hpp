#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"

class Ice : public AMateria {
    public:
    Ice(void);
    Ice(const Ice& ref);
    ~Ice(void);

    Ice& operator=(const Ice& ref);

    // AMateria virtual
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
