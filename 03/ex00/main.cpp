#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap bob("bob");

    bob.print_state();
    bob.takeDamage(100);
    bob.attack("MONSTER");
    bob.beRepaired(10);
    bob.print_state();
    return 0;
}