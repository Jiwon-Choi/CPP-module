#include <iostream>
#include <string>

int main(void) {
    std::string string = "HI THIS IS BRAIN";

    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "============ address ============" << std::endl;
    std::cout << "string    : " << &string << std::endl
              << "stringPTR : " << stringPTR << std::endl
              << "stringREF : " << &stringREF << std::endl << std::endl;

    std::cout << "============= value =============" << std::endl;
    std::cout << "string    : " << string << std::endl
              << "stringPTR : " << *stringPTR << std::endl
              << "stringREF : " << stringREF << std::endl;
    return (0);
}
