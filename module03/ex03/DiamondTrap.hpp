#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:

	std::string	m_Name;

	public:

	void		whoAmI() const;
	std::string	get_Name() const;

	DiamondTrap(std::string Name);

	DiamondTrap();
	DiamondTrap(const DiamondTrap &v);
	DiamondTrap	&operator=(const DiamondTrap &v);
	virtual ~DiamondTrap();
};

#endif
