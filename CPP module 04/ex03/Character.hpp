#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include "ICharacter.hpp"

class Character : public ICharacter {
    private:
    std::string _name;
    AMateria* _inventory[4];

    public:
    Character(void);
    Character(std::string name);
    Character(const Character& ref);
    ~Character(void);

    Character& operator=(const Character& ref);

    // ICharacter virtual
    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif
