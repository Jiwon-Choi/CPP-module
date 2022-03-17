#include "Cat.hpp"

Cat::Cat(void) : Animal() {
    std::cout << "Cat Default Constructor is called" << std::endl;
    type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat& ref) : Animal(ref) {
    std::cout << "Cat Copy Constructor is called" << std::endl;
    _brain = new Brain();
    for (int i = 0; i < IDEA_SIZE; i++)
        _brain->setIdeas(ref._brain->getIdea(i));
}

Cat::~Cat(void) {
    std::cout << "Cat Destructor is called" << std::endl;
    delete _brain;
}

Cat& Cat::operator=(const Cat& ref) {
    if (this != &ref) {
        Animal::operator=(ref);
        delete _brain;
        this->_brain = ref._brain;
    }
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "야옹" << std::endl;
}

void Cat::addBrainIdea(std::string str) {
    _brain->setIdeas(str);
}

const std::string& Cat::getBrainIdea(int idx) const {
    return (_brain->getIdea(idx));
}
