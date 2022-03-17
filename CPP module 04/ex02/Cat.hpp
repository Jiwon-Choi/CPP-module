#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
    Brain* _brain;

    public:
    Cat(void);
    Cat(const Cat& ref);
    ~Cat(void);

    Cat& operator=(const Cat& ref);

    void makeSound(void) const;
    void addBrainIdea(std::string str);
    const std::string& getBrainIdea(int idx) const;
};

#endif
