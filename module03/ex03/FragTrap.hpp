#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:

	void		highFivesGuys(void);

	FragTrap(std::string const &Name);

	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &v);
	FragTrap	&operator=(const FragTrap &v);
};

#endif
