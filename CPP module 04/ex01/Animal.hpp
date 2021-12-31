#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>
# include <string>

class Animal {
    protected:
    std::string type;

    public:
    Animal(void);
    Animal(const Animal& ref);
    virtual ~Animal(void);

    Animal& operator=(const Animal& ref);

    std::string getType(void) const;

    virtual void makeSound(void) const;
};

#endif
