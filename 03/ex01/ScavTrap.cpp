#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor call" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->damage = 20;
}

void ScavTrap::attack(const std::string &target){
    if (hp <= 0){
        std::cout << "(ScavTrap)Cant attack, because i am dead" << std::endl;
        return;
    }
    if (ep <= 0){
        std::cout << "(ScavTrap)Cant attack, because i dont have energy" << std::endl;
        return;
    }
    std::cout << "(ScavTrap)ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!";
    std::cout << std::endl;
    ep--;
}


void    ScavTrap::guardGate(){
    std::cout << "(ScavTrap)" << name << " is protecting gate now" << std::endl; 
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap desctructor call" << std::endl;
}

