#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define BOOK_SIZE 8
#include "Contact.hpp"

class PhoneBook{
private:
    Contact contacts[BOOK_SIZE];
    int     last_added;
    int     not_empty;
public:
    PhoneBook();
    void        add_contact(Contact contact);
    std::string trunc(std::string s);
    void        display();
    int         get_not_empty();
    void        select();
};

#endif