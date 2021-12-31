#include "Character.hpp"

Character::Character(void) : _name("Jiwchoi") {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& ref) : _name(ref._name) {
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i])
            _inventory[i] = NULL;
        else
            _inventory[i] = ref._inventory[i]->clone();
    }
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
}

Character& Character::operator=(const Character& ref) {
    _name = ref._name;
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i])
            _inventory[i] = NULL;
        else
            _inventory[i] = ref._inventory[i]->clone();
    }
    return (*this);
}

std::string const& Character::getName(void) const {
    return (_name);
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return ;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (_inventory[idx])
        _inventory[idx]->use(target);
}
