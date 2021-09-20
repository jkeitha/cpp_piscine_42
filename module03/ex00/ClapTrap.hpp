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

	std::string		get_Name();
	unsigned int	get_Hitpoints();
	unsigned int	get_Energy_points();
	unsigned int	get_Attack_damage();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap(std::string const &Name);

	ClapTrap();
	ClapTrap(ClapTrap &v);
	ClapTrap	&operator=(ClapTrap &v);
	~ClapTrap();
}

#endif
