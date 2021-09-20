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
	// std::cout << "Int constructor called\n";
	m_point = i * (1 << m_bit);
}

Fixed::Fixed(const float i)
{
	// std::cout << "Float constructor called\n";
	m_point = roundf(i * (1 << m_bit));
}

Fixed::Fixed(const Fixed &v)
{
	// std::cout << "Copy constructor called\n";
	// m_point = v.getRawBits();
	*this = v;
}

Fixed::Fixed()
{
	// std::cout << "Default constructor called\n";
	m_point = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

/*
**	assignation operator overload
*/

Fixed	&Fixed::operator=(const Fixed &v)
{
	// std::cout << "Assignation operator called\n";
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

/*
** comparison operators overload
*/

bool	Fixed::operator>(const Fixed &v) const { return (m_point > v.getRawBits()); }

bool	Fixed::operator<(const Fixed &v) const { return (m_point < v.getRawBits()); }

bool	Fixed::operator>=(const Fixed &v) { return (m_point >= v.getRawBits()); }

bool	Fixed::operator<=(const Fixed &v) { return (m_point <= v.getRawBits()); }

bool	Fixed::operator==(const Fixed &v) { return (m_point == v.getRawBits()); }

bool	Fixed::operator!=(const Fixed &v) { return (m_point != v.getRawBits()); }

/*
** arithmetic operators overload
*/

Fixed	Fixed::operator+(const Fixed &v)
{
	Fixed	new_class;

	new_class.setRawBits(m_point + v.getRawBits());
	return new_class;
}

Fixed	Fixed::operator-(const Fixed &v)
{
	Fixed	new_class;

	new_class.setRawBits(m_point - v.getRawBits());
	return new_class;
}

Fixed	Fixed::operator*(const Fixed &v)
{
	Fixed	new_class(toFloat() * v.toFloat());
	return new_class;
}

Fixed	Fixed::operator/(const Fixed &v)
{
	Fixed	new_class(toFloat() * v.toFloat());
	return new_class;
}

/*
** increment and decrement
*/

Fixed	&Fixed::operator++()
{
	m_point += 1;
	return *this;
}

Fixed	&Fixed::operator--()
{
	m_point -= 1;
	return *this;
}

Fixed	Fixed::operator++(int n)
{
	(void) n;
	Fixed	temp = *this;
	++*this;
	return temp;
}

Fixed	Fixed::operator--(int n)
{
	(void) n;
	Fixed	temp = *this;
	--*this;
	return temp;
}

/*
** min and max
*/

Fixed		&Fixed::min(Fixed &v1, Fixed &v2) { return (v1 < v2 ? v1 : v2); }

Fixed		&Fixed::max(Fixed &v1, Fixed &v2) { return (v1 > v2 ? v1 : v2); }

const Fixed	&Fixed::min(const Fixed &v1, const Fixed &v2) { return (v1 < v2 ? v1 : v2); }

const Fixed	&Fixed::max(const Fixed &v1, const Fixed &v2) { return (v1 > v2 ? v1 : v2); }
