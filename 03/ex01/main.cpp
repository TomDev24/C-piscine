#include <iostream>
#include "ScavTrap.hpp"

int main()
{
    ScavTrap john("john");

    john.print_state();
    john.attack("GHOST");
    john.takeDamage(20);
    john.guardGate();
    john.print_state();
    return 0;
}
