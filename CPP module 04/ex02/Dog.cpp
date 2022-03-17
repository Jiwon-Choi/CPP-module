#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    std::cout << "Dog Default Constructor is called" << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog& ref) : Animal(ref) {
    std::cout << "Dog Copy Constructor is called" << std::endl;
    _brain = new Brain();
    for (int i = 0; i < IDEA_SIZE; i++)
        _brain->setIdeas(ref._brain->getIdea(i));
}

Dog::~Dog(void) {
    std::cout << "Dog Destructor is called" << std::endl;
    delete _brain;
}

Dog& Dog::operator=(const Dog& ref) {
    if (this != &ref) {
        Animal::operator=(ref);
        delete _brain;
        this->_brain = ref._brain;
    }
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
