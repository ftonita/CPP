#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int	_point;
	static int _fractional;

public:
	Fixed();
	Fixed(Fixed const &copy);

	Fixed &operator=(Fixed const &copy);

	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif