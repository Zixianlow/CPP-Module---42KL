#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int	fixedPointValue;
	static const int	fractionalBitsValue = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed& operator=(const Fixed &copy);
	Fixed(const Fixed &copy);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream&stream, const Fixed& copy);

#endif
