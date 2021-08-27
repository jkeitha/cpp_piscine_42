#include "Zombie.hpp"

void	Zombie::set_name(std::string name)
{
	m_name = name;
}

void	Zombie::set_message(std::string message)
{
	m_message = message;
}

void	Zombie::announce( void )
{
	std::cout << m_name << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << m_message << " " << m_name << " is died\n";
}
