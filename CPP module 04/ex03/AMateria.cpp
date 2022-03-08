#include "AMateria.hpp"

AMateria::AMateria(void) : _type(""), _unequip(false) {}
AMateria::AMateria(const AMateria& ref) : _type(ref._type), _unequip(ref._unequip) {}
AMateria::AMateria(std::string const& type) : _type(type), _unequip(false) {}
AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(const AMateria& ref) {
    _type = ref._type;
    _unequip = ref._unequip;
    return (*this);
}

void AMateria::setUnequip(void) {
    _unequip = true;
}

const bool& AMateria::getUnequip(void) const {
    return (_unequip);
}

std::string const& AMateria::getType(void) const {
    return (_type);
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
