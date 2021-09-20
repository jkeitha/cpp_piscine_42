#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &Name)
{
	std::cout << "constructor\n";
	m_Name = Name;
	m_Hitpoints = 10;
	m_Energy_points = 10;
	m_Attack_damage = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << "default constructor\n";
	m_Name = "nothing";
	m_Hitpoints = 10;
	m_Energy_points = 10;
	m_Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &v)
{
	std::cout << "copy constructor\n";
	*this = v;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &v)
{
	std::cout << "assignment operator\n";
	if (this == &v)
		return *this;
	m_Name = v.get_Name();
	m_Hitpoints = v.get_Hitpoints();
	m_Energy_points = v.get_Energy_points();
	m_Attack_damage = v.get_Attack_damage();
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor\n";
}

std::string		ClapTrap::get_Name() { return m_Name; }
unsigned int	ClapTrap::get_Hitpoints() { return m_Hitpoints; }
unsigned int	ClapTrap::get_Energy_points() { return m_Energy_points; }
unsigned int	ClapTrap::get_Attack_damage() { return m_Attack_damage; }

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\n";
}
