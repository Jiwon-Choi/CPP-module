#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {
    private:
    int cnt;
    Contact contact[8];

    public:
    void AddContact(void);
    void SearchContact(void);
};

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
}

int main(void) {
    std::string cmd;
    PhoneBook phonebook;

    while (true) {
        std::cout << ">>> command : ";
        std::getline(std::cin, cmd);

        // if (std::cin.eof())
        //     return (-1);
        if (cmd == "EXIT")
            return (0);
        else if (cmd == "ADD")
            phonebook.AddContact();
        else if (cmd == "SEARCH")
            phonebook.SearchContact();
    }
    return (0);
}
