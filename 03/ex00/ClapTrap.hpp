#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    hp;
    unsigned int    ep;
    unsigned int    damage;

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &assign);
    virtual ~ClapTrap();
    virtual void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    swap(const ClapTrap &copy);
    void    print_state();
};


#endif