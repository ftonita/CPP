#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
	FragTrap();

	public:

	FragTrap(FragTrap const &copy);
	FragTrap(std::string name);
	FragTrap &operator=(FragTrap const &copy);

	~FragTrap();

	void	highFivesGuys(void);

};

#endif