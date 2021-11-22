#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include "Contact.hpp"

class PhoneBook {
    private:
    int cnt;
    Contact contact[8];

    public:
    void AddContact(void);
    void SearchContact(void);
};

#endif
