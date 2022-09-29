#include "Harl.hpp"

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
    std::cout << " I really do!";
    std::cout << std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}

void Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I`ve been coming for years whereas you started working here since last month.";
    std::cout << std::endl;
}

void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void Harl::complain(std::string level){
    std::string levels[] = {"debug", "info", "warning", "error"};
    HarlAction actions[] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4; i++){
        if (level == levels[i])
            (this->*(actions[i]))();
    }
}