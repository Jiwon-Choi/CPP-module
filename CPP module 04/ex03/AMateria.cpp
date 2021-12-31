#include "AMateria.hpp"

AMateria::AMateria(void) : _type("") {}
AMateria::AMateria(const AMateria& ref) : _type(ref._type) {}
AMateria::AMateria(std::string const& type) : _type(type) {}
AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(const AMateria& ref) {
    _type = ref._type;
    return (*this);
}

std::string const& AMateria::getType(void) const {
    return (_type);
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
