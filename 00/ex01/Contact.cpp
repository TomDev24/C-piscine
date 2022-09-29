#include "Contact.hpp"

std::string Contact::get_fname(){
    return fname;
}
void Contact::set_fname(std::string fname){
    this->fname = fname;
}
std::string Contact::get_lname(){
    return lname;
}
void Contact::set_lname(std::string lname){
    this->lname = lname;
}
std::string Contact::get_nickname(){
    return nickname;
}
void Contact::set_nickname(std::string nickname){
    this->nickname = nickname;
}
std::string Contact::get_phone(){
    return phone;
}
void Contact::set_phone(std::string phone){
    this->phone = phone;
}
std::string Contact::get_secret(){
    return secret;
}
void Contact::set_secret(std::string secret){
    this->secret = secret;
}

Contact create_contact(){
    Contact     contact;
    std::string data;

    std::cout << "Enter first name:" << std::endl;
    std::cin >> data;
    contact.set_fname(data);
    std::cout << "Enter last name:" << std::endl;
    std::cin >> data;
    contact.set_lname(data);
    std::cout << "Enter nickname:" << std::endl;
    std::cin >> data;
    contact.set_nickname(data);
    std::cout << "Enter phone number:" << std::endl;
    std::cin >> data;
    contact.set_phone(data);
    std::cout << "Enter your darkest secret:" << std::endl;
    std::cin >> data;
    contact.set_secret(data);
    return contact;
}