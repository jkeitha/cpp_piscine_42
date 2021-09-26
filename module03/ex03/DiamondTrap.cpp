#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap Name: " << get_Name() << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::get_Name() << std::endl;
}

std::string	DiamondTrap::get_Name() const { return m_Name; }

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name")
{
	std::cout << "DiamondTrap constructor with arg\n";
	m_Name = Name + "_diamond_name";
}

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name")
{
	std::cout << "default DiamondTrap constructor\n";
	m_Name = "default_diamond_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &v)
{
	std::cout << "copy DiamondTrap constructor\n";
	*this = v;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &v)
{
	std::cout << "DiamondTrap assignment operator\n";
	if (this == &v)
		return *this;
	m_Name = v.m_Name;
	ClapTrap::m_Name = v.get_Name();
	ClapTrap::m_Hitpoints = v.get_Hitpoints();
	ClapTrap::m_Energy_points = v.get_Energy_points();
	ClapTrap::m_Attack_damage = v.get_Attack_damage();
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor\n";
}
