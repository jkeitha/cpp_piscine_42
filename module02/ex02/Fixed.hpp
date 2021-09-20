#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath> // contains roundf

/*
** ortodox canonical class:
**
** 1. default constructor
** 2. copy constructor
** 3. assignation operator overload
** 4. destructor
*/

class	Fixed
{
	private:

	int					m_point;
	static const int	m_bit = 8;

	public:

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	// comparison operators overload

	bool	operator>(const Fixed &v) const;
	bool	operator<(const Fixed &v) const;
	bool	operator>=(const Fixed &v);
	bool	operator<=(const Fixed &v);
	bool	operator==(const Fixed &v);
	bool	operator!=(const Fixed &v);

	// arithmetic operators overload

	Fixed	operator+(const Fixed &v);
	Fixed	operator-(const Fixed &v);
	Fixed	operator*(const Fixed &v);
	Fixed	operator/(const Fixed &v);

	// increment and decrement by Microsoft

	Fixed	&operator++();			// Prefix increment
	Fixed	operator++(int n);		// Postfix increment
	Fixed	&operator--();			// Prefix decrement
	Fixed	operator--(int n);		// Postfix decrement

	// min and max

	static Fixed		&min(Fixed &v1, Fixed &v2);
	static Fixed		&max(Fixed &v1, Fixed &v2);
	const static Fixed	&min(const Fixed &v1, const Fixed &v2);
	const static Fixed	&max(const Fixed &v1, const Fixed &v2);

	Fixed(const float i);
	Fixed(const int i);

	// ortodox canonical form

	Fixed();
	Fixed(const Fixed &v);
	Fixed	&operator=(const Fixed &v);
	~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &v);

#endif
