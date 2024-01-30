#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap;
    ScavTrap scavTrap("ScavTrap");

    clap.attack("target");
    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    scavTrap.guardGate();
    return 0;
}
