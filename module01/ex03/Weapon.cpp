#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	return m_type;
}

void	Weapon::setType(const std::string &type)
{
	m_type = type;
}

Weapon::Weapon(const std::string &type)
{
	// std::cout << "Weapon inited\n";
	m_type = type;
}

Weapon::~Weapon()
{
	// std::cout << "Weapon destructed\n";
}
