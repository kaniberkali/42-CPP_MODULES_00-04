#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int     index;
    public:
        PhoneBook();
        ~PhoneBook();
        void        add(void);
        void        view(void) const;
        void        search(void) const;
        std::string input(std::string text) const;
};

#endif
