#include "Zombie.hpp"

/*
Zombie::Zombie(std::string name){
    this->name = name;
}
*/


Zombie::~Zombie(){
    std::cout << name << ": " << "being destoyed" << std::endl; 
}

void Zombie::setName(std::string name){
    this->name = name;
}

void Zombie::announce(){
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..."  << std::endl;
}