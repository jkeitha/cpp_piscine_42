#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:
	std::string	m_name;
	std::string	m_message;

	public:
	void	set_name(std::string name);
	void	set_message(std::string message);
	void	announce( void );

	~Zombie();
};

#endif
