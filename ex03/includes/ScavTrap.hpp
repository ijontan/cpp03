#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include "string"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
private:
	bool _guardGateMode;

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &src);
	ScavTrap &operator=(const ScavTrap &rhs);
	void guardGate(void);
	void attack(const std::string &target);
};
#endif
