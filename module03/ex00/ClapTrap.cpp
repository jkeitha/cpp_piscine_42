#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &Name)
{
	std::cout << "constructor with arg\n";
	m_Name = Name;
	m_Hitpoints = 10;
	m_Energy_points = 10;
	m_Attack_damage = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << "default constructor\n";
	m_Name = "Stiv";
	m_Hitpoints = 10;
	m_Energy_points = 10;
	m_Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &v)
{
	std::cout << "copy constructor\n";
	*this = v;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &v)
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
	std::cout << "destructor " << get_Name() << std::endl;
}

std::string		ClapTrap::get_Name() const { return m_Name; }
unsigned int	ClapTrap::get_Hitpoints() const { return m_Hitpoints; }
unsigned int	ClapTrap::get_Energy_points() const { return m_Energy_points; }
unsigned int	ClapTrap::get_Attack_damage() const { return m_Attack_damage; }

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << get_Name()
	<< " attack " << target << ", causing "
	<< get_Attack_damage() << " points of damage!\n";
	m_Energy_points -= 1;
	m_Attack_damage += 5;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << get_Name()
	<< " take " << amount << " points of damage!\n";
	m_Hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << get_Name()
	<< " take " << amount << " points of repair\n";
	m_Hitpoints += amount;
	m_Energy_points += 1;
}
