#include "PhoneBook.hpp"

void PhoneBook::AddContact(void) {
    std::cout << "[Add Contact]" << std::endl;
    if (cnt < 8)
        contact[cnt++].InputInfo();
    else
        std::cout << "Full" << std::endl;
}

void PhoneBook::SearchContact(void) {
    std::cout << "[Search Contact]" << std::endl;
    std::cout << '|' << std::setw(10) << "index" << '|'
                    << std::setw(10) << "first name" << '|'
                    << std::setw(10) << "last name" << '|'
                    << std::setw(10) << "nickname" << '|' << std::endl;
    for (int i = 0; i < cnt; i++) {
        std::cout << '|' << std::setw(10) << i << '|';
        contact[i].PreviewInfo();
    }
    std::cout << std::endl;

    std::string str_idx;
    std::cout << ">>> Select index : ";
    std::getline(std::cin, str_idx);
    if (std::cin.eof())
        return ;
    if (str_idx.length() == 1 && str_idx[0] >= '0' && str_idx[0] <= '9') {
        int idx = atoi(str_idx.c_str());
        if (idx >= cnt) {
            std::cout << "Wrong index!!!" << std::endl;
            return ;
        }
        contact[idx].ViewInfo();
    }
    else
        std::cout << "Wrong index!!!" << std::endl;
}
