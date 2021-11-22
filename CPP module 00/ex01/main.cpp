#include "PhoneBook.hpp"

int main(void) {
    std::string cmd;
    PhoneBook phonebook;

    while (true) {
        std::cout << ">>> command : ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            return (-1);
        if (cmd == "EXIT")
            return (0);
        else if (cmd == "ADD")
            phonebook.AddContact();
        else if (cmd == "SEARCH")
            phonebook.SearchContact();
        // else
        //     std::cout << "Command not found!!!" << std::endl;
        std::cout << std::endl;
    }
    return (0);
}
