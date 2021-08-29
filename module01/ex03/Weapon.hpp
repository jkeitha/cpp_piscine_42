#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon
{
	private:
	std::string	m_type;

	public:
	const std::string	&getType();
	void				setType(const std::string &type);

	Weapon(const std::string &type);
	~Weapon();
};

#endif
