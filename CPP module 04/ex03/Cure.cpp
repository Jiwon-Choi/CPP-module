#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}
Cure::Cure(const Cure& ref) : AMateria(ref) {}
Cure::~Cure(void) {}

Cure& Cure::operator=(const Cure& ref) {
    if (this != &ref) {
        _type = ref._type;
        _isEquipped = ref._isEquipped;
    }
    return (*this);
}

AMateria* Cure::clone(void) const {
    return (new Cure());
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
