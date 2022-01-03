#include "Contact.hpp"

std::string Contact::field_name[5] = {
    "first name",
    "last name",
    "nickname",
    "phone number",
    "darkest secret"
};

void Contact::InputInfo(void) {
    for (int i = 0; i < 5; i++) {
        while (true) {
            std::cout << field_name[i] << " : ";
            std::getline(std::cin, field[i]);
            if (std::cin.eof())
                return ;
            if (!field[i].empty())
                break ;
        }
    }
}

void Contact::PreviewInfo(void) {
    for (int i = 0; i < 3; i++) {
        if (field[i].length() < 10)
            std::cout << std::setw(10) << field[i] << '|';
        else {
            for (int j = 0; j < 9; j++)
                std::cout << field[i][j];
            std::cout << ".|";
        }
    }
    std::cout << std::endl;
}

void Contact::ViewInfo(void) {
    std::cout << "[Details]" << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << field_name[i] << " : " << field[i] << std::endl;
}
