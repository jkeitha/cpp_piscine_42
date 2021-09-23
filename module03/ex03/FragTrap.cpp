#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &Name) : ClapTrap(Name, 100, 100, 30)
{ std::cout << "FragTrap constructor with Name\n"; }

FragTrap::FragTrap() : ClapTrap() { std::cout << "default FragTrap constructor\n"; }

FragTrap::~FragTrap() { std::cout << "FragTrap destructor\n"; }

FragTrap::FragTrap(const FragTrap &v)
{
	std::cout << "copy FragTrap constructor\n";
	*this = v;
}

FragTrap &FragTrap::operator=(const FragTrap &v)
{
	std::cout << "FragTrap assignment operator\n";
	if (this == &v)
		return *this;
	m_Name = v.get_Name();
	m_Hitpoints = v.get_Hitpoints();
	m_Energy_points = v.get_Energy_points();
	m_Attack_damage = v.get_Attack_damage();
	return *this;
}

void	FragTrap::highFivesGuys(void) { std::cout << "high fives\n"; }
