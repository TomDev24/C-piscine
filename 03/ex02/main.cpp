#include <iostream>
#include "FragTrap.hpp"

int main()
{
    FragTrap neo("Neo");

    neo.print_state();
    neo.highFivesGuys();
    neo.attack("someone");
    neo.print_state();
    return 0;
}
