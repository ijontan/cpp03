#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    ~DiamondTrap(void);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &rhs);
    void attack(const std::string &target) override;
    void takeDamage(unsigned int amount) override;
    void beRepaired(unsigned int amount) override;
    void whoAmI(void);
};

#endif
