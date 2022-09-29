#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = NULL;
}

void HumanB::attack(){
    if (this->weapon)
        std::cout << name << " " << "attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " " << "cant attack, because dont have a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}