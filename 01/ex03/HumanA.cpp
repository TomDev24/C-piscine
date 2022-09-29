#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon) : weapon(new_weapon){
    this->name = name;
}

void HumanA::attack(){
    std::cout << name << " " << "attacks with their " << weapon.getType() << std::endl;
}