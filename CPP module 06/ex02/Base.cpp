#include "Base.hpp"

Base::~Base(void) {}

Base * generate(void) {
    srand(time(NULL));

    int value = rand() % 3;
    if (value == 0) return (new A());
    else if (value == 1) return (new B());
    else return (new C());
}

void identify(Base * p) {
    if (dynamic_cast<A *>(p))
        std::cout << "(pointer) A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "(pointer) B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "(pointer) C" << std::endl;
}

void identify(Base & p) {
    if (dynamic_cast<A *>(&p))
        std::cout << "(reference) A" << std::endl;
    else if (dynamic_cast<B *>(&p))
        std::cout << "(reference) B" << std::endl;
    else if (dynamic_cast<C *>(&p))
        std::cout << "(reference) C" << std::endl;
}
