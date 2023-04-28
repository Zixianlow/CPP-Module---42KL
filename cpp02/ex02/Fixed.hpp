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

	bool	operator>(const Fixed &copy) const;
	bool	operator<(const Fixed &copy) const;
	bool	operator>=(const Fixed &copy) const;
	bool	operator<=(const Fixed &copy) const;
	bool	operator==(const Fixed &copy) const;
	bool	operator!=(const Fixed &copy) const;
	Fixed	operator+(const Fixed &copy) const;
	Fixed	operator-(const Fixed &copy) const;
	Fixed	operator*(const Fixed &copy) const;
	Fixed	operator/(const Fixed &copy) const;
	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed&	min(Fixed &a, Fixed&b);
	static Fixed&	max(Fixed &a, Fixed&b);
	static const Fixed&	min(const Fixed &a, const Fixed&b);
	static const Fixed&	max(const Fixed &a, const Fixed&b);
};

std::ostream& operator<<(std::ostream&stream, const Fixed& copy);

#endif
