#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &rhs);
    void highFivesGuys(void);
};
#endif
