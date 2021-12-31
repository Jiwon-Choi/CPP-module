#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain Default Constructor is called" << std::endl;
}

Brain::Brain(const Brain& ref) {
    for (int i = 0; i < IDEA_SIZE; i++)
        _ideas[i] = ref._ideas[i];
    std::cout << "Brain Copy Constructor is called" << std::endl;
}

Brain::~Brain(void) {
    std::cout << "Brain Destructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain& ref) {
    for (int i = 0; i < IDEA_SIZE; i++)
        _ideas[i] = ref._ideas[i];
    return (*this);
}

void Brain::setIdeas(std::string str) {
    for (int i = 0; i < IDEA_SIZE; i++)
        if (_ideas[i].empty())
            _ideas[i] = str;
}

const std::string& Brain::getIdea(int idx) const {
    return (_ideas[idx]);
}
