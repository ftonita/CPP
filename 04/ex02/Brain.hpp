#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	private:

	protected:

	int			_num_ideas;
	std::string _ideas[100];

	public:

	Brain();
	Brain(Brain const &copy);
	~Brain();

	Brain &operator=(Brain const &copy);

};


#endif