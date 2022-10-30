#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
	private:
	std::string	_name;
	int	_hit_points;
	int	_energy_points;
	int _attack_damage;
    ClapTrap();


	public:

	ClapTrap(std::string name);

	ClapTrap(ClapTrap const &copy);

	ClapTrap &operator=(ClapTrap const &copy);

    ~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};


#endif