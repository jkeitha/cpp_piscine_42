#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
	Weapon		*m_weapon;
	std::string	m_name;

	public:
	void		attack();

	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();
};

#endif
