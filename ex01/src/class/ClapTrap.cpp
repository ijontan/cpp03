
#include "ClapTrap.hpp"
#include "iostream"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap without name is born! It will be called dafault for now!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap with name " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    std::cout << "ClapTrap with name " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    (void)rhs;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}