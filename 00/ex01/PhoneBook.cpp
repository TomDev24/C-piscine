#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    not_empty = 0;
    last_added = -1;
}
void PhoneBook::add_contact(Contact contact){
    int i;

    last_added++;
    if (not_empty < BOOK_SIZE)
        not_empty++;
    i = last_added % BOOK_SIZE;
    contacts[i] = contact;
}

std::string PhoneBook::trunc(std::string s){
    std::string res;

    if (s.size() > 10){
       res = s.substr(0, 10); 
       res[9] = '.';
       return res;
    }
    return s;
}

void PhoneBook::display(){
    if (not_empty == 0){
        std::cout << "No contacts in phonebook" << std::endl;
        return;
    }
    std::cout << "|" << std::setw(10) << "INDEX";
    std::cout << "|" << std::setw(10) << "FNAME";
    std::cout << "|" << std::setw(10) << "LNAME";
    std::cout << "|" << std::setw(10) << "NICKNAME" << "|";
    std::cout << std::endl;

    for (int i = 0; i < not_empty; i++){
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << trunc(contacts[i].get_fname());
        std::cout << "|" << std::setw(10) << trunc(contacts[i].get_lname());
        std::cout << "|" << std::setw(10) << trunc(contacts[i].get_nickname()) << "|";
        std::cout << std::endl;
    }
}

int PhoneBook::get_not_empty(){
    return not_empty;
}

void PhoneBook::select(){
    int index;

    std::cout << "Type index, to see more info about contact" << std::endl;
    std::cin >> index;
    if (index < 0 || index >= not_empty){
        std::cout << "Invalid index" << std::endl;
        return;
    }
    std::cout << "First Name: " << contacts[index].get_fname() << std::endl;
    std::cout << "Last Name: " << contacts[index].get_lname() << std::endl;
    std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].get_phone() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].get_secret() << std::endl;
}