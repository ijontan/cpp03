
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30)
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

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << this->getName() << std::endl;
}
