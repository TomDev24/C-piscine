#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "////ADDRESES" << std::endl;
    std::cout << "Addr of variable:       " << (void*)&str << std::endl;
    std::cout << "Addr held by pointer:   " << (void*)stringPTR << std::endl;
    std::cout << "Addr held by reference: " << (void*)&stringREF << std::endl;

    std::cout << "////VALUES" << std::endl;
    std::cout << "Value of variable:             " << str << std::endl;
    std::cout << "Value pointed to by pointer:   " << *stringPTR << std::endl;
    std::cout << "Value pointed to by reference: " << stringREF << std::endl;
    return 0;
}
