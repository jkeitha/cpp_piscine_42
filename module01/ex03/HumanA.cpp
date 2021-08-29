#include "HumanA.hpp"

void		HumanA::attack()
{
	std::cout << m_name << " attacks with this " << m_weapon->getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon)
{
	// std::cout << "HumanA inited\n";
	m_name = name;
	m_weapon = &weapon;
}

HumanA::~HumanA()
{
	// std::cout << "HumanA destructed\n";
}
