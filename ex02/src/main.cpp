#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap fragTrap("FragTrap");

    fragTrap.attack("target");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();
    return 0;
}
