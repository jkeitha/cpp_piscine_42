#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:
	std::string	m_name;

	public:
	void	set_name(std::string name);
	void	announce( void );

	~Zombie();
};

#endif
