#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &Name) : ClapTrap(Name, 100, 50, 20)
{ std::cout << "ScavTrap constructor with Name\n"; }

ScavTrap::ScavTrap() : ClapTrap() { std::cout << "default ScavTrap constructor\n"; }

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor\n"; }

ScavTrap::ScavTrap(const ScavTrap &v)
{
	std::cout << "copy ScavTrap constructor\n";
	*this = v;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &v)
{
	std::cout << "ScavTrap assignment operator\n";
	if (this == &v)
		return *this;
	m_Name = v.get_Name();
	m_Hitpoints = v.get_Hitpoints();
	m_Energy_points = v.get_Energy_points();
	m_Attack_damage = v.get_Attack_damage();
	return *this;
}

void	ScavTrap::guardGate() { std::cout << "Gate keeper mode\n"; }
