#include "Fixed.hpp"

/*
**	getter and setter
*/

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return m_point;
}

void	Fixed::setRawBits(int const raw) { m_point = raw; }

/*
**	constructors and destructor
*/

Fixed::Fixed(const Fixed &v)
{
	std::cout << "Copy constructor called\n";
	m_point = v.getRawBits();
	// *this = v;
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
