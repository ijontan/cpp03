#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavTrap("ScavTrap");

    scavTrap.attack("target");
    return 0;
}
