#include "Fixed.hpp"

/*
**	getter and setter
*/

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return m_point;
}

void	Fixed::setRawBits(int const raw) { m_point = raw; }

/*
**	constructors and destructor
*/

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called\n";
	m_point = i * (1 << m_bit);
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called\n";
	m_point = roundf(i * (1 << m_bit));
}

Fixed::Fixed(const Fixed &v)
{
	std::cout << "Copy constructor called\n";
	m_point = v.getRawBits();
}

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	m_point = 0;
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

/*
**	assignation operator overload
*/

Fixed	&Fixed::operator=(const Fixed &v)
{
	std::cout << "Assignation operator called\n";
	if (this == &v)
		return (*this);
	m_point = v.getRawBits();
	return (*this);
}

/*
**	insert operator overload by Microsoft
*/

std::ostream	&operator<<(std::ostream &os, const Fixed &v)
{
	os << v.toFloat();
	return os;
}

/*
**	convert methods
*/

float	Fixed::toFloat( void ) const { return (float)m_point / (float)(1 << m_bit); }

int		Fixed::toInt( void ) const { return m_point / (1 << m_bit); }
