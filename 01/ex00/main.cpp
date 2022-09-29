#include <iostream>
#include "Zombie.hpp"

int main()
{
    randomChump("Bob");
    std::cout << "After randomChump call with stack zombie" << std::endl;

    Zombie *heapZombie;
    heapZombie = newZombie("Heappy");
    heapZombie->announce();
    std::cout << "After announce of heap Zombie" << std::endl;
    delete heapZombie;
    std::cout << "After delete of heap Zombie" << std::endl;

    return 0;
}
