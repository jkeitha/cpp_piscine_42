#include "Fixed.hpp"

/*
**	getter and setter
*/

int		Fixed::getRawBits(void) const { return m_point; }

void	Fixed::setRawBits(int const raw) { m_point = raw; }

/*
**	assignation operator overload
*/

Fixed	&Fixed::operator=(const Fixed &v) {}

/*
**	constructors and destructor
*/

Fixed::Fixed(const Fixed &v) {}

Fixed::Fixed() { m_point = 0; }

Fixed::~Fixed() {}
