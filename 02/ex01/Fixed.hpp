#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string.h>
# include <math.h>

class Fixed
{
	private:
		int					_point;
		static const int	_nb_bits = 8;

	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);

		~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);
#endif