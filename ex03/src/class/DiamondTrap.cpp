
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    std::cout << "DiamondTrap named " << name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    (void)rhs;
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    ScavTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}