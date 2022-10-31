#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		DiamondTrap();
		std::string	_name;

	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &copy);

		void	whoAmI(void);
		void	attack(const std::string &target);
};

#endif