#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void menu(){
    std::cout << "||||||||||||||||||||||||||||||" << std::endl;
    std::cout << "WELCOME TO AWESOME PHONEBOOK" << std::endl;
    std::cout << "commands: ADD, SEARCH, EXIT" << std::endl;
    std::cout << "||||||||||||||||||||||||||||||" << std::endl;
}

int main()
{
    PhoneBook   book;
    std::string cmd;

    menu();
    while(true){
        std::cin >> cmd;
        if (cmd == "ADD"){
            book.add_contact(create_contact());
        }
        else if (cmd == "SEARCH"){
            book.display();
            if (book.get_not_empty() > 0)
                book.select();
        }
        else if (cmd == "EXIT"){
            break;
        }
    }
    return 0;
}
