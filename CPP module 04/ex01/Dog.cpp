#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    type = "Dog";
    _brain = new Brain();
    std::cout << "Dog Default Constructor is called" << std::endl;
}

Dog::Dog(const Dog& ref) : Animal(ref) {
    _brain = new Brain();
    for (int i = 0; i < IDEA_SIZE; i++)
        _brain[i] = ref._brain[i];
    std::cout << "Dog Copy Constructor is called" << std::endl;
}

Dog::~Dog(void) {
    delete _brain;
    std::cout << "Dog Destructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog& ref) {
    Animal::operator=(ref);
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "왈왈" << std::endl;
}

void Dog::addBrainIdea(std::string str) {
    _brain->setIdeas(str);
}

const std::string& Dog::getBrainIdea(int idx) const {
    return (_brain->getIdea(idx));
}
