#include "Zombie.hpp"

void	Zombie::set_name(std::string name)
{
	m_name = name;
}

void	Zombie::announce( void )
{
	std::cout << m_name << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << m_name << " is died\n";
}
