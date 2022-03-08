#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ref) {
    for (int i = 0; i < 4; i++) {
        if (!ref._inventory[i])
            _inventory[i] = NULL;
        else
            _inventory[i] = ref._inventory[i]->clone();
    }
}

MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref) {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
    for (int i = 0; i < 4; i++) {
        if (!ref._inventory[i])
            _inventory[i] = NULL;
        else
            _inventory[i] = ref._inventory[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return (_inventory[i]->clone());
    }
    return (NULL);
}
