#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default", 100, 50, 20)
{
    std::cout << "ScavTrap is born!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap named " << name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    (void)rhs;
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->getName() << " is dead!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    if (this->_guardGateMode == false)
    {
        this->_guardGateMode = true;
        std::cout << "ScavTrap " << this->getName() << " has entered guard gate mode!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->getName() << " is already in guard gate mode" << std::endl;
}