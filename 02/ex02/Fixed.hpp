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
	~Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &copy);

int getRawBits( void ) const;
void setRawBits( int const raw );
float toFloat( void ) const;
int toInt( void ) const;

Fixed& operator++(void);
Fixed operator++(int);
Fixed& operator--(void);
Fixed operator--(int);

Fixed operator+(Fixed const &fixed);
Fixed operator-(Fixed const &fixed);
Fixed operator*(Fixed const &fixed);
Fixed operator/(Fixed const &fixed);

bool operator>(Fixed const &fixed) const;
bool operator<(Fixed const &fixed) const;
bool operator>=(Fixed const &fixed) const;
bool operator<=(Fixed const &fixed) const;
bool operator==(Fixed const &fixed) const;
bool operator!=(Fixed const &fixed) const;

static Fixed& min(Fixed &a, Fixed &b);
static Fixed& max(Fixed &a, Fixed &b);
static const Fixed&  min(const Fixed &a, const Fixed &b);
static const Fixed&  max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);
#endif