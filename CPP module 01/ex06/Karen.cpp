#include "Karen.hpp"

void Karen::debug(void) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon "
            << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl
            << "I just love it!" << std::endl << std::endl;
}

void Karen::info(void) {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. " << std::endl
            << "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning(void) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " << std::endl
            << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error(void) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

Karen::Karen(void) {
    // std::cout << "Karen constructor is called" << std::endl;
}

Karen::~Karen(void) {
    // std::cout << "Karen destructor is called" << std::endl;
}

void Karen::complain(std::string level) {
    void (Karen::*fp[4])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
    std::string levelArr[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    int levelNum;
    for (levelNum = 0; levelNum < 4; levelNum++)
        if (levelArr[levelNum] == level)
            break ;

    switch (levelNum) {
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break ;
    case 0:
        (this->*(fp[0]))();
    case 1:
        (this->*(fp[1]))();
    case 2:
        (this->*(fp[2]))();
    case 3:
        (this->*(fp[3]))();
    }
}
