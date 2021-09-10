#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private:

	int			m_point;
	const int	m_bit = 8;

	public:

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed	&operator=(const Fixed &v);

	Fixed(const Fixed &v);
	Fixed();
	~Fixed();
};

#endif
