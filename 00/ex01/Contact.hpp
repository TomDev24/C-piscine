#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
private:
    std::string fname;
    std::string lname;
    std::string nickname;
    std::string phone;
    std::string secret;
public:
    std::string get_fname();
    void set_fname(std::string fname);
    std::string get_lname();
    void set_lname(std::string lname);
    std::string get_nickname();
    void set_nickname(std::string nickname);
    std::string get_phone();
    void set_phone(std::string phone);
    std::string get_secret();
    void set_secret(std::string secret);
};

Contact    create_contact();
#endif
