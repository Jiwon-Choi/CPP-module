#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
    AMateria* _inventory[4];

    public:
    MateriaSource(void);
    MateriaSource(const MateriaSource& ref);
    ~MateriaSource(void);

    MateriaSource& operator=(const MateriaSource& ref);

    // IMateriaSource virtual
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const& type);
};

#endif
