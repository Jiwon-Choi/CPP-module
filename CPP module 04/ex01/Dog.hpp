#ifndef __DOG_H__
# define __DOG_H__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private:
    Brain* _brain;

    public:
    Dog(void);
    Dog(const Dog& ref);
    ~Dog(void);

    Dog& operator=(const Dog& ref);

    void makeSound(void) const;
    void addBrainIdea(std::string str);
    const std::string& getBrainIdea(int idx) const;
};

#endif
