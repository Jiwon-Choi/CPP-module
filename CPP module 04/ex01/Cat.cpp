#include "Cat.hpp"

Cat::Cat(void) : Animal() {
    type = "Cat";
    _brain = new Brain();
    std::cout << "Cat Default Constructor is called" << std::endl;
}

Cat::Cat(const Cat& ref) : Animal(ref) {
    _brain = new Brain();
    for (int i = 0; i < IDEA_SIZE; i++)
        _brain[i] = ref._brain[i];
    std::cout << "Cat Copy Constructor is called" << std::endl;
}

Cat::~Cat(void) {
    delete _brain;
    std::cout << "Cat Destructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat& ref) {
    Animal::operator=(ref);
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
