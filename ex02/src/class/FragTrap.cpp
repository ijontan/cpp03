
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap with no name is born!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap named " << name << "is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    *this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    (void)rhs;
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->getName() << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " is asking for high fives!" << std::endl;
}