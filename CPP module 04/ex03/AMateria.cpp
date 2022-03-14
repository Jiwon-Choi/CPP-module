#include "AMateria.hpp"

AMateria::AMateria(void) : _type(""), _isEquipped(false) {}
AMateria::AMateria(const AMateria& ref) : _type(ref._type), _isEquipped(ref._isEquipped) {}
AMateria::AMateria(std::string const& type) : _type(type), _isEquipped(false) {}
AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(const AMateria& ref) {
    if (this != &ref) {
        _type = ref._type;
        _isEquipped = ref._isEquipped;
    }
    return (*this);
}

void AMateria::setIsEquipped(bool state) {
    _isEquipped = state;
}

const bool& AMateria::getIsEquipped(void) const {
    return (_isEquipped);
}

std::string const& AMateria::getType(void) const {
    return (_type);
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
