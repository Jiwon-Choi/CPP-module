#include "MutantStack.hpp"
# include <iostream>

int main(void) {
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    std::cout << mstack.top() << std::endl;
    mstack.pop(); // pop 17
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    std::cout << "-----------------------------------" << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "-----------------------------------" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    ++rit;
    --rit;
    while (rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << "-----------------------------------" << std::endl;

    MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.crend();
    ++crit;
    --crit;
    while (crit != crite) {
        std::cout << *crit << std::endl;
        ++crit;
    }

    std::stack<int> s(mstack);
    return (0);
}