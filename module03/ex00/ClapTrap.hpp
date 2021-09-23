#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	private:

	std::string		m_Name;
	unsigned int	m_Hitpoints;
	unsigned int	m_Energy_points;
	unsigned int	m_Attack_damage;

	public:

	std::string		get_Name() const;
	unsigned int	get_Hitpoints() const;
	unsigned int	get_Energy_points() const;
	unsigned int	get_Attack_damage() const;

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap(std::string const &Name);

	ClapTrap();
	ClapTrap(const ClapTrap &v);
	ClapTrap	&operator=(const ClapTrap &v);
	~ClapTrap();
};

#endif
