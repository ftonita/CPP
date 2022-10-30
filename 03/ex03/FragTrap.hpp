#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	protected:
	FragTrap();

	public:

	FragTrap(FragTrap const &copy);
	FragTrap(std::string name);
	FragTrap &operator=(FragTrap const &copy);

	~FragTrap();

	void	highFivesGuys(void);

};

#endif