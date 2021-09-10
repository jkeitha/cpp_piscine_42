#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

	Fixed	&operator=(const Fixed &v);

	Fixed(const float i);
	Fixed(const int i);
	Fixed(const Fixed &v);
	Fixed();
	~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &v);

#endif
