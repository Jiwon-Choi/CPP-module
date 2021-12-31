#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__

# include <iostream>
# include <string>

class WrongAnimal {
    protected:
    std::string type;

    public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal& ref);
    ~WrongAnimal(void);

    WrongAnimal& operator=(const WrongAnimal& ref);

    std::string getType(void) const;

    void makeSound(void) const;
};

#endif
