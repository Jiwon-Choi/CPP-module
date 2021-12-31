#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"

class Cure : public AMateria {
    public:
    Cure(void);
    Cure(const Cure& ref);
    ~Cure(void);

    Cure& operator=(const Cure& ref);

    // AMateria virtual
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
