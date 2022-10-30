#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap();

public:
    ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &copy);

	void guardGate();
};

#endif