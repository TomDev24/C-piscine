#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor call" << std::endl;
    this->hp = 100;
    this->ep = 100;
    this->damage = 30;

}

void FragTrap::highFivesGuys(){
    std::cout << "(FragTrap)" << name << " asks for high five" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor call" << std::endl;
}