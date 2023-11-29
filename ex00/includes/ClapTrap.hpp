
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &rhs);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void) const;
};

#endif