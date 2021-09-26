#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:

	void		guardGate();

	ScavTrap(std::string const &Name);

	ScavTrap();
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap &v);
	ScavTrap	&operator=(const ScavTrap &v);
};

#endif
