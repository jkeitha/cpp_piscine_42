#include "HumanB.hpp"

void		HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

void		HumanB::attack()
{
	if (m_weapon)
		std::cout << m_name << " attacks with this " << m_weapon->getType() << std::endl;
	else
		std::cout << "no weapon\n";
}

HumanB::HumanB(const std::string &name)
{
	// std::cout << "HumanB inited\n";
	m_name = name;
	m_weapon = 0;
}

HumanB::~HumanB()
{
	// std::cout << "HumanB destructed\n";
}
