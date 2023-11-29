#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavTrap("ScavTrap");

    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    scavTrap.guardGate();
    return 0;
}
