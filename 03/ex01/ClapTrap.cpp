#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor call" << std::endl;
    this->name = name;
    this->hp = 10;
    this->ep = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    swap(copy);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &assign){
    if(this != &assign)
        swap(assign);
    return *this;
}

void ClapTrap::swap(const ClapTrap &copy){
    name = copy.name;
    hp = copy.hp;
    ep = copy.ep;
    damage = copy.damage;
}

void ClapTrap::attack(const std::string &target){
    if (hp <= 0){
        std::cout << "Cant attack, because i am dead" << std::endl;
        return;
    }
    if (ep <= 0){
        std::cout << "Cant attack, because i dont have energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!";
    std::cout << std::endl;
    ep--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (hp <= 0){
        std::cout << "Cant kill what is already dead" <<std::cout;
    }
    std::cout << "Damaged by " << amount << " points" << std::endl;
    hp = amount >= hp ? 0 : hp - amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (hp <= 0){
        std::cout << "Cant be repaired, because i am dead" << std::endl;
        return;
    }
    if (ep <= 0){
        std::cout << "Cant be repaired, because i dont have energy" << std::endl;
        return;
    }
    std::cout << "Repaired by " << amount << " points" << std::endl;
    ep--;
    hp += amount;
}

void ClapTrap::print_state(){
    std::cout << "-----" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "EP: " << ep << std::endl;
    std::cout << "Attack Damage level: " << damage << std::endl;
    std::cout << "-----" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor call" << std::endl;
}