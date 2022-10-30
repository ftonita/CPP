#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
	ScavTrap();

	public:
    ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &copy);

	void guardGate();
};

#endif